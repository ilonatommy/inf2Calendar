#pragma once
class Ramp
{
private:
	TimeOffset deliveryInterval;
	ID id;
public:
	Ramp(ID, TimeOffset);
	void deliverGoods(Time);
	TimeOffset get_deliveryInterval();
	ID getID();
};

