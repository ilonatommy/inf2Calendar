#pragma once
class Link
{
private:
	int nodeID;
	int destID;
	NodeType src_type;
	NodeType dest_type;
	Preferences probability;
public:
	Link(Sender&, Receiver&);
	~Link();
};

