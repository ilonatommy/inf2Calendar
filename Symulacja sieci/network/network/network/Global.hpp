#ifndef TYPES_HPP
#define TYPES_HPP
typedef unsigned int Time;
typedef unsigned int TimeOffset;


enum class QueueType{
LIFO,
FIFO
}

enum class NodeType{
Worker,
Ramp
}

std::ostringstream & readFile();

#endif
