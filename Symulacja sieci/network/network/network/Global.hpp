#ifndef GLOBAL_HPP
#define GLOBAL_HPP
typedef int Time;
typedef int TimeOffset;
typedef int ID;


enum class QueueType{
LIFO,
FIFO
}

enum class NodeType{
Worker,
Ramp
}

std::ostringstream & readFile(std::ifstream& );

#endif
