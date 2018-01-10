#pragma once
class IQueue
{
private:
	QueueType _queueType;
	std::deque<Product> _deque;
	std::function<Product()> popFunction;
	queue
	
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

