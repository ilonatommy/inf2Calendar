#pragma once
class Storehouse:public Receiver
{
private:
	std::vector<Product&> list_of_product
	ID elemenID;
public:
	Storehouse(ID);
	void receivePackage(Package);
	ID getID();
	std::vector<Product&> view();
};

