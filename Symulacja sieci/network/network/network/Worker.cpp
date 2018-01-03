#include "stdafx.h"
#include "Worker.h"


Worker::Worker(ID _id, TimeOffset _processingDuration, Time _processingStartTime,IQueue* _queue)
{
  	(*this).processingStartTime = _processingStartTime; 
	(*this).processingDuration = _processingDuration; 
	(*this).id = _id;
  	(*this).queue = _queue;
}


Worker::~Worker()
{
}

void receive_product(Product)
{
	(*this).queue.push(Product);		
}

void displayQueue()
{
	while (!(*this).queue.empty())
  {
    	std::cout << q.front() << " ";
    	(*this).queue.pop();
  }
}
