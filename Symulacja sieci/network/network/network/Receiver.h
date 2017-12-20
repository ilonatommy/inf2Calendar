#pragma once
class Receiver
{
public:
	Receiver();
	~Receiver();
	receivePackage(Product* );
	view();
	NodeType getReceiverType();
	int getID();
};

