#pragma once
class Link
{
private:
	int nodeID;
	int destID;
	NodeType srcType;
	NodeType destType;
	Preferences probability;
public:
	Link(const Sender& S,const Receiver& R);
	~Link();
};

