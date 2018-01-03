#include "stdafx.h"
#include "Worker.h"


Worker::Worker(ID _id, TimeOffset _processingDuration, Time _processingStartTime,QueueType* _queueType)
{
  	(*this).processingStartTime = _processingStartTime; 
	(*this).processingDuration = _processingDuration; 
	(*this).id = _id;
  	(*this).queueType = _queueType;
}


Worker::~Worker()
{
}
