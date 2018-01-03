#include "stdafx.h"
#include "Worker.h"


Worker::Worker(ID _id, TimeOffset _time, QueueType* _queue)
{
  (*this).time_of_processing = ? 
	(*this).processing_duration = _time; 
	(*this).id = _id;
  (*this).queue_type = _queue;
}


Worker::~Worker()
{
}
