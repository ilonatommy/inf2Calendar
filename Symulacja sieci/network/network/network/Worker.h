#pragma once
class Worker: public Sender, publicReceiver
{
private:
	Time processingStartTime;
	TimeOffset processingDuration 
	ID id;
 	IQueue* queue;
public:
	Worker(ID, TimeOffset, Time, IQueue*);
	void receive_product(Product);
	void displayQueue()
};

