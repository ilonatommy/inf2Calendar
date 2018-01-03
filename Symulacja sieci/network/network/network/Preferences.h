#pragma once
class Preferences
{
private:
	std::unordered_map<Receiver* , double> probabilities;
public:
	std::unordered_map<Receiver* ,double> getProbabilities();
	setProbabilities(std::unordered_map<Receiver* , double>);
	addReceiver(Receiver* );
	addReceiverWithProbabilities(Receiver* ,double);
	//getReceiver(Receiver* );
	void removeReceiver(Receiver* );
	Reeceiver* drawReceiver();
	pair<Receiver* , double> view();
};

