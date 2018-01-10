#pragma once
class ReportNetwork:public IReport
{
public:
	ReportNetwork();
	~ReportNetwork();
	virtual makeReport(ostream&) override;
};

