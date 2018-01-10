#pragma once
class Storehouse:public Receiver
{
private:
	std::vector<Product&> listOfProduct;
	ID elemenID;
public:
	Storehouse(ID);
	void receivePackage(Product);
	ID getID();
	std::vector<Product> view();
};

