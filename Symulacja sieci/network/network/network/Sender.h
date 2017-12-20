#pragma once
class Sender
{
private:
	QueueType queue_type ;
	IQueue queue;
public:
	Sender();
	~Sender();
	send(Product*, queue&, Receiver& );
};

