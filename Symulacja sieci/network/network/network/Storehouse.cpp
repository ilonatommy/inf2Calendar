#include "stdafx.h"
#include "Storehouse.h"


Storehouse::Storehouse(ID =_id)
{
 list_of_product=std::vector<Product> vec;
 elemID=_id;
}

void::Storehouse receive_package(Package)
{
  (*this).list_of_product.push-back(Package);
}

ID Storehouse::getID(){return (*this).elemenID}

void Storehouse::view()
{
 for(auto i:(*this).list_of_product)
 {
   std::cout<<i<<std::endl;
 }
}

