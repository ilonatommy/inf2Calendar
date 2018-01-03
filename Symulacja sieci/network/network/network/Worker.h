#pragma once
class Worker
{
private:
	Time processingStartTime;
	TimeOffset processingDuration 
	ID id;
 	IQueue* queue;
public:
	Worker(ID, TimeOffset, Time, IQueue*);
	void receive_product(Product);
	void view_depot()
};

