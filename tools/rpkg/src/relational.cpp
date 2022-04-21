#include "cpp11.hpp"
#include "duckdb.hpp"
#include "typesr.hpp"
#include "rapi.hpp"

#include "R_ext/Random.h"

#include "duckdb/parser/expression/columnref_expression.hpp"
#include "duckdb/parser/expression/constant_expression.hpp"
#include "duckdb/parser/expression/function_expression.hpp"
#include "duckdb/parser/expression/comparison_expression.hpp"
#include "duckdb/parser/expression/conjunction_expression.hpp"
#include "duckdb/parser/expression/operator_expression.hpp"
#include "duckdb/parser/expression/cast_expression.hpp"
#include "duckdb/parser/expression/case_expression.hpp"

#include "duckdb/main/relation/filter_relation.hpp"
#include "duckdb/main/relation/projection_relation.hpp"
#include "duckdb/main/relation/aggregate_relation.hpp"
#include "duckdb/main/relation/order_relation.hpp"
#include "duckdb/main/relation/join_relation.hpp"
#include "duckdb/main/relation/limit_relation.hpp"
#include "duckdb/main/relation/distinct_relation.hpp"

using namespace duckdb;
using namespace cpp11;

template <typename T, typename... Args>
external_pointer<T> make_external(const string &rclass, Args &&...args) {
	auto extptr = external_pointer<T>(new T(std::forward<Args>(args)...));
	((sexp)extptr).attr("class") = rclass;
	return (extptr);
}

// DuckDB Expressions

[[cpp11::register]] SEXP rapi_expr_reference(std::string name, std::string table) {
	if (name.size() == 0) {
		stop("expr_reference: Zero length name");
	}
	if (!table.empty()) {
		auto res = make_external<ColumnRefExpression>("duckdb_expr", name, table);
		res->alias = name; // TODO does this really make sense here?
		return res;
	} else {
		return make_external<ColumnRefExpression>("duckdb_expr", name);
	}
}

[[cpp11::register]] SEXP rapi_expr_constant(sexp val) {
	if (LENGTH(val) != 1) {
		stop("expr_constant: Need value of length one");
	}
	return make_external<ConstantExpression>("duckdb_expr", RApiTypes::SexpToValue(val, 0));
}

[[cpp11::register]] SEXP rapi_expr_function(std::string name, list args) {
	if (name.size() == 0) {
		stop("expr_function: Zero length name");
	}
	vector<unique_ptr<ParsedExpression>> children;
	for (auto arg : args) {
		children.push_back(expr_extptr(arg)->Copy());
	}
	return make_external<FunctionExpression>("duckdb_expr", name, move(children));
}

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
[[cpp11::register]] std::string expr_tostring_cpp(duckdb::expr_extptr expr) {
=======
[[cpp11::register]] std::string  rapi_expr_tostring(duckdb::expr_extptr_t expr) {
>>>>>>> 712778f35 (using rapi_ prefix for native calls for consistency)
=======
=======
[[cpp11::register]] void rapi_expr_set_alias(duckdb::expr_extptr_t expr, std::string alias) {
	expr->alias = alias;
}

>>>>>>> b912aa6d8 (making a few more queries work)
[[cpp11::register]] std::string rapi_expr_tostring(duckdb::expr_extptr_t expr) {
>>>>>>> 148f92c4d (format)
	return expr->ToString();
}

// DuckDB Relations

<<<<<<< HEAD
<<<<<<< HEAD
[[cpp11::register]] SEXP rel_from_df_cpp(duckdb::con_extptr con, data_frame df) {
=======
[[cpp11::register]] SEXP  rapi_rel_from_df(duckdb::conn_eptr_t con, data_frame df) {
>>>>>>> 712778f35 (using rapi_ prefix for native calls for consistency)
=======
[[cpp11::register]] SEXP rapi_rel_from_df(duckdb::conn_eptr_t con, data_frame df) {
>>>>>>> 148f92c4d (format)
	if (!con->conn) {
		stop("rel_from_df: Invalid connection");
	}
	if (df.size() == 0) {
		stop("rel_from_df: Invalid data frame");
	}

	named_parameter_map_t other_params;
	// other_params["experimental"] = Value::BOOLEAN(true);
	auto alias = StringUtil::Format("dataframe_%d_%d", (uintptr_t)(SEXP)df,
	                                (int32_t)(NumericLimits<int32_t>::Maximum() * unif_rand()));
	auto rel =
	    con->conn->TableFunction("r_dataframe_scan", {Value::POINTER((uintptr_t)(SEXP)df)}, other_params)->Alias(alias);
	auto res = sexp(make_external<RelationWrapper>("duckdb_relation", move(rel)));
	res.attr("df") = df;
	return res;
}

<<<<<<< HEAD
<<<<<<< HEAD
[[cpp11::register]] SEXP rel_filter_cpp(duckdb::rel_extptr rel, list exprs) {
=======
[[cpp11::register]] SEXP  rapi_rel_filter(duckdb::rel_extptr_t rel, list exprs) {
>>>>>>> 712778f35 (using rapi_ prefix for native calls for consistency)
=======
[[cpp11::register]] SEXP rapi_rel_filter(duckdb::rel_extptr_t rel, list exprs) {
>>>>>>> 148f92c4d (format)
	unique_ptr<ParsedExpression> filter_expr;
	if (exprs.size() == 0) { // nop
		warning("rel_filter without filter expressions has no effect");
		return rel;
	} else if (exprs.size() == 1) {
		filter_expr = ((expr_extptr)exprs[0])->Copy();
	} else {
		vector<unique_ptr<ParsedExpression>> filters;
		for (expr_extptr expr : exprs) {
			filters.push_back(expr->Copy());
		}
		filter_expr = make_unique<ConjunctionExpression>(ExpressionType::CONJUNCTION_AND, move(filters));
	}
	auto res = std::make_shared<FilterRelation>(rel->rel, move(filter_expr));
	return make_external<RelationWrapper>("duckdb_relation", res);
}

<<<<<<< HEAD
<<<<<<< HEAD
[[cpp11::register]] SEXP rel_project_cpp(duckdb::rel_extptr rel, list exprs) {
=======
[[cpp11::register]] SEXP  rapi_rel_project(duckdb::rel_extptr_t rel, list exprs) {
>>>>>>> 712778f35 (using rapi_ prefix for native calls for consistency)
=======
[[cpp11::register]] SEXP rapi_rel_project(duckdb::rel_extptr_t rel, list exprs) {
>>>>>>> 148f92c4d (format)
	if (exprs.size() == 0) {
		warning("rel_project without projection expressions has no effect");
		return rel;
	}
	vector<unique_ptr<ParsedExpression>> projections;
	vector<string> aliases;

<<<<<<< HEAD
	for (expr_extptr expr : exprs) {
		aliases.push_back((expr->ToString()));
=======
	for (expr_extptr_t expr : exprs) {
<<<<<<< HEAD
		aliases.push_back(expr->alias.empty() ? expr->ToString() : expr->alias);
>>>>>>> b912aa6d8 (making a few more queries work)
		projections.push_back(expr->Copy());
=======
		auto dexpr = expr->Copy();
		aliases.push_back(dexpr->alias.empty() ? dexpr->ToString() : dexpr->alias);
		projections.push_back(move(dexpr));
>>>>>>> 18803ae95 (tpch 1-10 work)
	}

	auto res = std::make_shared<ProjectionRelation>(rel->rel, move(projections), move(aliases));
	return make_external<RelationWrapper>("duckdb_relation", res);
}

<<<<<<< HEAD
<<<<<<< HEAD
[[cpp11::register]] SEXP rel_aggregate_cpp(duckdb::rel_extptr rel, list groups, list aggregates) {
=======
[[cpp11::register]] SEXP  rapi_rel_aggregate(duckdb::rel_extptr_t rel, list groups, list aggregates) {
>>>>>>> 712778f35 (using rapi_ prefix for native calls for consistency)
=======
[[cpp11::register]] SEXP rapi_rel_aggregate(duckdb::rel_extptr_t rel, list groups, list aggregates) {
>>>>>>> 148f92c4d (format)
	vector<unique_ptr<ParsedExpression>> res_groups, res_aggregates;

	// TODO deal with empty groups
	vector<string> aliases;

	for (expr_extptr expr : groups) {
		res_groups.push_back(expr->Copy());
		res_aggregates.push_back(expr->Copy());
	}

	int aggr_idx = 0; // has to be int for - reasons
	auto aggr_names = aggregates.names();

	for (expr_extptr expr_p : aggregates) {
		auto expr = expr_p->Copy();
		if (aggr_names.size() > aggr_idx) {
			expr->alias = aggr_names[aggr_idx];
		}
		res_aggregates.push_back(move(expr));
		aggr_idx++;
	}

	auto res = std::make_shared<AggregateRelation>(rel->rel, move(res_aggregates), move(res_groups));
	return make_external<RelationWrapper>("duckdb_relation", res);
}

<<<<<<< HEAD
[[cpp11::register]] SEXP rel_order_cpp(duckdb::rel_extptr rel, list orders) {
=======
[[cpp11::register]] SEXP rapi_rel_order(duckdb::rel_extptr_t rel, list orders) {
>>>>>>> 712778f35 (using rapi_ prefix for native calls for consistency)
	vector<OrderByNode> res_orders;

	for (expr_extptr expr : orders) {
		res_orders.emplace_back(OrderType::ASCENDING, OrderByNullType::NULLS_FIRST, expr->Copy());
	}

	auto res = std::make_shared<OrderRelation>(rel->rel, move(res_orders));
	return make_external<RelationWrapper>("duckdb_relation", res);
}

[[cpp11::register]] SEXP rapi_rel_inner_join(duckdb::rel_extptr_t left, duckdb::rel_extptr_t right, list conds) {
	unique_ptr<ParsedExpression> cond;

	if (conds.size() == 0) { // nop
		stop("rel_inner_join needs conditions");
	} else if (conds.size() == 1) {
		cond = ((expr_extptr_t)conds[0])->Copy();
	} else {
		vector<unique_ptr<ParsedExpression>> cond_args;
		for (expr_extptr_t expr : conds) {
			cond_args.push_back(expr->Copy());
		}
		cond = make_unique<ConjunctionExpression>(ExpressionType::CONJUNCTION_AND, move(cond_args));
	}

	auto res = std::make_shared<JoinRelation>(left->rel, right->rel, move(cond), JoinType::INNER);
	return make_external<RelationWrapper>("duckdb_relation", res);
}

[[cpp11::register]] SEXP rapi_rel_limit(duckdb::rel_extptr_t rel, int64_t n) {
	return make_external<RelationWrapper>("duckdb_relation", std::make_shared<LimitRelation>(rel->rel, n, 0));
}

[[cpp11::register]] SEXP rapi_rel_distinct(duckdb::rel_extptr_t rel) {
	return make_external<RelationWrapper>("duckdb_relation", std::make_shared<DistinctRelation>(rel->rel));
}

static SEXP result_to_df(unique_ptr<QueryResult> res) {
	if (!res->success) {
		stop(res->error);
	}
	if (res->type == QueryResultType::STREAM_RESULT) {
		res = ((StreamQueryResult &)*res).Materialize();
	}
	D_ASSERT(res->type == QueryResultType::MATERIALIZED_RESULT);
	auto mat_res = (MaterializedQueryResult *)res.get();

	writable::integers row_names;
	row_names.push_back(NA_INTEGER);
	row_names.push_back(-mat_res->collection.Count());

	// TODO this thing we can probably statically cache
	writable::strings classes;
	classes.push_back("tbl_df");
	classes.push_back("tbl");
	classes.push_back("data.frame");

	auto df = sexp(duckdb_execute_R_impl(mat_res));
	df.attr("class") = classes;
	df.attr("row.names") = row_names;
	return df;
}

<<<<<<< HEAD
<<<<<<< HEAD
[[cpp11::register]] SEXP rel_to_df_cpp(duckdb::rel_extptr rel) {
	return result_to_df(rel->rel->Execute());
}

[[cpp11::register]] std::string rel_tostring_cpp(duckdb::rel_extptr rel) {
	return rel->rel->ToString();
}

[[cpp11::register]] SEXP rel_explain_cpp(duckdb::rel_extptr rel) {
	return result_to_df(rel->rel->Explain());
}

[[cpp11::register]] SEXP rel_sql_cpp(duckdb::rel_extptr rel, std::string sql) {
=======
[[cpp11::register]] SEXP  rapi_rel_to_df(duckdb::rel_extptr_t rel) {
=======
[[cpp11::register]] SEXP rapi_rel_to_df(duckdb::rel_extptr_t rel) {
>>>>>>> 148f92c4d (format)
	return result_to_df(rel->rel->Execute());
}

[[cpp11::register]] std::string rapi_rel_tostring(duckdb::rel_extptr_t rel) {
	return rel->rel->ToString();
}

[[cpp11::register]] SEXP rapi_rel_explain(duckdb::rel_extptr_t rel) {
	return result_to_df(rel->rel->Explain());
}

<<<<<<< HEAD
<<<<<<< HEAD
[[cpp11::register]] SEXP  rapi_rel_sql(duckdb::rel_extptr_t rel, std::string sql) {
>>>>>>> 712778f35 (using rapi_ prefix for native calls for consistency)
=======
=======
[[cpp11::register]] std::string rapi_rel_alias(duckdb::rel_extptr_t rel) {
	return rel->rel->GetAlias();
}

[[cpp11::register]] SEXP rapi_rel_set_alias(duckdb::rel_extptr_t rel, std::string alias) {
	return make_external<RelationWrapper>("duckdb_relation", rel->rel->Alias(alias));
}

>>>>>>> b912aa6d8 (making a few more queries work)
[[cpp11::register]] SEXP rapi_rel_sql(duckdb::rel_extptr_t rel, std::string sql) {
>>>>>>> 148f92c4d (format)
	auto res = rel->rel->Query("_", sql);
	if (!res->success) {
		stop(res->error);
	}
	return result_to_df(move(res));
}

<<<<<<< HEAD
<<<<<<< HEAD
[[cpp11::register]] SEXP rel_names_cpp(duckdb::rel_extptr rel) {
=======
[[cpp11::register]] SEXP  rapi_rel_names(duckdb::rel_extptr_t rel) {
>>>>>>> 712778f35 (using rapi_ prefix for native calls for consistency)
=======
[[cpp11::register]] SEXP rapi_rel_names(duckdb::rel_extptr_t rel) {
>>>>>>> 148f92c4d (format)
	auto ret = writable::strings();
	for (auto &col : rel->rel->Columns()) {
		ret.push_back(col.Name());
	}
	return (ret);
}
