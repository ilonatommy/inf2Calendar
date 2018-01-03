#pragma once
class Ramp
{
private:
	TimeOffset deliveryInterval;
	ID elemenID;
public:
	Ramp(ID, TimeOffset);
	deliverGoods(Time);
	TimeOffset get_deliveryInterval();
	ID getID();
};

