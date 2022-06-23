//===----------------------------------------------------------------------===//
//                         DuckDB
//
// duckdb/execution/operator/helper/physical_result_collector.hpp
//
//
//===----------------------------------------------------------------------===//

#pragma once

#include "duckdb/execution/physical_operator.hpp"

namespace duckdb {

//! PhysicalResultCollector is an abstract class that is used to generate the final result of a query
class PhysicalResultCollector : public PhysicalOperator {
public:
	PhysicalResultCollector(PhysicalOperator *plan, vector<string> names, vector<LogicalType> types);

	PhysicalOperator *plan;
	vector<string> names;

public:
<<<<<<< HEAD
	static unique_ptr<PhysicalResultCollector> GetResultCollector(PhysicalOperator *plan, vector<string> names,
	                                                              vector<LogicalType> types);
=======
	static unique_ptr<PhysicalResultCollector> GetResultCollector(ClientContext &context, PreparedStatementData &data);
>>>>>>> 7324db43f (All tests working again)

public:
	//! The final method used to fetch the query result from this operator
	virtual unique_ptr<QueryResult> GetResult(GlobalSinkState &state) = 0;

	bool IsSink() const override {
		return true;
	}

public:
	vector<PhysicalOperator *> GetChildren() const override;

	void BuildPipelines(Executor &executor, Pipeline &current, PipelineBuildState &state) override;
};

} // namespace duckdb
