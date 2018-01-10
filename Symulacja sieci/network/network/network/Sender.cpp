#include "stdafx.h"
#include "Sender.h"


Sender::Sender()
{
  //receiverPreferences z pliku
}


Sender::~Sender()
{
}

Preferences getReceiverPreferences()
{
  return (*this).receiverPreferences;
}

setReceiverPreferences(Preferences)
{
  //czytanie z pliku? Po co skoro już to robimy w konstruktorze?
}

void sendProduct(Receiver receiver,Product product)
{
  receiver.ReceivePackage(&product);
}

std::vector<Product> getSendingBuffer()
{
  return (*this).sendingBuffer;
}
