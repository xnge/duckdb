//===----------------------------------------------------------------------===//
//                         DuckDB
//
// duckdb/execution/operator/helper/physical_execute.hpp
//
//
//===----------------------------------------------------------------------===//

#pragma once

#include "duckdb/execution/physical_operator.hpp"
#include "duckdb/main/prepared_statement_data.hpp"

namespace duckdb {

class PhysicalExecute : public PhysicalOperator {
public:
	explicit PhysicalExecute(PhysicalOperator *plan);

	PhysicalOperator *plan;
<<<<<<< HEAD
	unique_ptr<PhysicalOperator> owned_plan;
	shared_ptr<PreparedStatementData> prepared;
=======

public:
	vector<PhysicalOperator *> GetChildren() const override;

public:
	void BuildPipelines(Executor &executor, Pipeline &current, PipelineBuildState &state) override;
>>>>>>> a33845632 (WIP commit: move BuildPipelines into the physical operators themselves)
};

} // namespace duckdb
