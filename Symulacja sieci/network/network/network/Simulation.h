#pragma once
class Simulation
{
public:
	Simulation();
	~Simulation();
	
	bool isNetCorrect();
	
	std::vector<Ramp> getRamps();
	std::vector<Storehouse> getStorehouses();
	std::vector<Worker> getWorkers();
	
	void addRamp(Ramp);
	void addStorehouse(Storehouse);
	void addWorker(Worker);
	
	void deleteRamp(int ID); //odwołanie do this w funkcji
	void deleteStorehouse(int ID);
	void deleteWorker(int ID);
	
private:
	std::vector<Ramp> ramps;
	std::vector<Storehouse> storehouses;
	std::vector<Worker> workers;	
};

