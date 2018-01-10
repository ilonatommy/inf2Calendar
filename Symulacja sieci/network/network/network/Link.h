#pragma once
class Link
{
private:
	ID nodeID;
	ID destID;
	NodeType srcType;
	NodeType destType;
	Preferences probability;
public:
	Link(const Sender& S,const Receiver& R);
	~Link();
};

