#pragma once
class IQueue
{
public:
	IQueue();
	~IQueue();
	virtual create()=0;
	push(Package& );
	pop();
	bool isEmpty();
	view();
	QueueType getQueueType();
	int size();
};

