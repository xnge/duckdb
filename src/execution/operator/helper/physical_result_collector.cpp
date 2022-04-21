#include "duckdb/execution/operator/helper/physical_result_collector.hpp"
#include "duckdb/execution/operator/helper/physical_materialized_collector.hpp"
#include "duckdb/execution/operator/helper/physical_batch_collector.hpp"
<<<<<<< HEAD

namespace duckdb {

PhysicalResultCollector::PhysicalResultCollector(PhysicalOperator *plan_p, vector<string> names_p,
                                                 vector<LogicalType> types_p)
    : PhysicalOperator(PhysicalOperatorType::RESULT_COLLECTOR, {LogicalType::BOOLEAN}, 0), plan(plan_p),
      names(move(names_p)) {
	this->types = move(types_p);
}

unique_ptr<PhysicalResultCollector>
PhysicalResultCollector::GetResultCollector(PhysicalOperator *plan, vector<string> names, vector<LogicalType> types) {
	return make_unique<PhysicalMaterializedCollector>(plan, names, types, false);
=======
#include "duckdb/main/prepared_statement_data.hpp"
#include "duckdb/main/config.hpp"
#include "duckdb/parallel/pipeline.hpp"

namespace duckdb {

PhysicalResultCollector::PhysicalResultCollector(PreparedStatementData &data)
    : PhysicalOperator(PhysicalOperatorType::RESULT_COLLECTOR, {LogicalType::BOOLEAN}, 0),
      statement_type(data.statement_type), properties(data.properties), plan(data.plan.get()), names(data.names) {
	this->types = data.types;
}

unique_ptr<PhysicalResultCollector> PhysicalResultCollector::GetResultCollector(ClientContext &context,
                                                                                PreparedStatementData &data) {
	auto &config = DBConfig::GetConfig(context);
	bool use_materialized_collector = !config.preserve_insertion_order || !data.plan->AllSourcesSupportBatchIndex();
	if (use_materialized_collector) {
		// parallel materialized collector only if we don't care about maintaining insertion order
		return make_unique_base<PhysicalResultCollector, PhysicalMaterializedCollector>(
		    data, !config.preserve_insertion_order);
	} else {
		// we care about maintaining insertion order and the sources all support batch indexes
		// use a batch collector
		return make_unique_base<PhysicalResultCollector, PhysicalBatchCollector>(data);
	}
>>>>>>> 7324db43f (All tests working again)
}

vector<PhysicalOperator *> PhysicalResultCollector::GetChildren() const {
	return {plan};
}

void PhysicalResultCollector::BuildPipelines(Executor &executor, Pipeline &current, PipelineBuildState &state) {
	// operator is a sink, build a pipeline
	sink_state.reset();

	// single operator:
	// the operator becomes the data source of the current pipeline
	state.SetPipelineSource(current, this);
	// we create a new pipeline starting from the child
	D_ASSERT(children.size() == 0);
	D_ASSERT(plan);

	BuildChildPipeline(executor, current, state, plan);
}

} // namespace duckdb
