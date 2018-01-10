#include "stdafx.h"
#include "Preferences.h"


Preferences::Preferences()
{
  probabilities=std::unordered_map<Receiver*,double> map();
}

Preferences::std::unordered_map<Receiver* ,double> getPreferences()
{
  return (*this).probabilities;
}

void Preferences::setProbabilities(std::unordered_map<Receiver* , double> map)
{
  (*this).probabilities=map;
}

void addReceiver(Receiver* r) {
  for(auto& entry : probabilities) {
    
  for(auto it = probabilities.begin(); it != probabilities.end(); it++) {
    auto& entry = *it;
    // modyfikacja prawdop.
    entry.second
  }
}
