#pragma once
class Sender
{
private:
	Preferences receiverPreferences;
	std::vector<Product> sendingBuffer;
public:
	Sender(Preferences);
	Preferences get_receiverPreferences();
	set_receiverPreferences(Preferences);
	void sendProduct();
	std::vector<Product> get_sendingBuffer();
};

