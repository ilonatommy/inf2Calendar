#pragma once
class Worker
{
private:
	Time processingStartTime;
	TimeOffset processingDuration 
	ID id;
	QueueType* queue;
public:
	Worker(ID, TimeOffset, Time, QueueType*);
	void receive_product(Product);
	void view_depot()
};

