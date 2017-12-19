#pragma once
class ReportNetwork
{
public:
	ReportNetwork();
	~ReportNetwork();
	virtual makeReport(ostream&) override;
};

