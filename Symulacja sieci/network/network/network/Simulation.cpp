#include "stdafx.h"
#include "Simulation.h"


Simulation::Simulation(std::ostringstream & stream)
{
}

Simulation::~Simulation()
{
}

bool isNetCorrect()
{
}
	
std::vector<Ramp> getRamps()
{
}
std::vector<Storehouse> getStorehouses()
{
}
std::vector<Worker> getWorkers()
{
}
	
void addRamp(Ramp ramp)
{
	(*this).push_back(ramp);
}
void addStorehouse(Storehouse storehouse)
{
	(*this).push_back(storehouse);
}
void addWorker(Worker worker)
{
	(*this).push_back(worker);
}

void deleteRamp(int ID)
{
	(*this).erease(*this.begin()+(ID-1));
}
void deleteStorehouse(int ID)
{
	(*this).erease(*this.begin()+(ID-1));
}
void deleteWorker(int ID)
{
	(*this).erease(*this.begin()+(ID-1));
}
