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
	Link(Sender&, Receiver&);
	~Link();
};

