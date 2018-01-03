#pragma once
class IQueue
{
private:
	QueueType _queueType;
	std::dequeue<Product> _dequeue;
	std::function<Product()> popFunction;
	
public:
	IQueue(QueueType);
	virtual create()=0;
	void push(Product);
	Product pop();
	bool isEmpty();
	Product[] view();
	QueueType getQueueType();
	bool size();
};

