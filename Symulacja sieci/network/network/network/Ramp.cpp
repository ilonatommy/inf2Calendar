#include "stdafx.h"
#include "Ramp.h"


Ramp::Ramp(ID _id, TimeOffset _deliveryInterval)
{
  (*this).deliveryInterval = _deliveryInterval;
  (*this).id = _id;
}


Ramp::~Ramp()
{
}

void deliverGoods(Time)
{
  //czytanie z pliku
}

TimeOffset get_deliveryInterval()
{
  return (*this).deliveryInterval;
}

ID getID()
{
  return (*this).id;
}
