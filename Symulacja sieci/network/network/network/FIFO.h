#pragma once
class FIFO:public Iqueue
{
public:
	FIFO();
	~FIFO();
	virtual create() override;
};

