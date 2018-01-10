#pragma once
class ReportSimulation:public IReport
{
public:
	ReportSimulation();
	~ReportSimulation();
	virtual makeReport(ostream&) override
};

