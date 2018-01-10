#include "stdafx.h"
#include "Storehouse.h"


Storehouse::Storehouse(ID =_id)
{
 listOfProduct=std::vector<Product> vec;
 elemID=_id;
}

void::Storehouse receivePackage(Package)
{
  (*this).listofProduct.push_back(Package);
}

ID Storehouse::getID(){return (*this).elemenID}

void Storehouse::view()
{
 for(auto i:(*this).listOfProduct)
 {
   std::cout<<i<<std::endl;
 }
}

