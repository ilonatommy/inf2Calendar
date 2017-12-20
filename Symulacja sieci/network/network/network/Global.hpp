#ifndef GLOBAL_HPP
#define GLOBAL_HPP
typedef int Time;
typedef int TimeOffset;


enum class QueueType{
LIFO,
FIFO
}

enum class NodeType{
Worker,
Ramp
}

std::ostringstream & readFile(FILE* file);

#endif
