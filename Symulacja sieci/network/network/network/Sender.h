#pragma once
class Sender
{
private:
	Preferences receiverPreferences;
	std::vector<Product> sendingBuffer;
	NodeType type;
public:
	Sender(Preferences);
	Preferences getReceiverPreferences();
	setReceiverPreferences(Preferences);
	void sendProduct(Receiver);
	std::vector<Product> getSendingBuffer();
	NodeType getSenderType(return (*this).type)
};

