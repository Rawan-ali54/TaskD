#include "Node.h"
#include <ctime>
#include <random>
static int node_counter = 0;
static int client_counter = 0;
void clien::acc() {
	/*float max = Temp[Temp.size - 5];
	float min = Temp[Temp.size - 5];
	for (int i = Temp.size - 5; i < Temp.size; i++) {
		if (max < Temp[i]) {
			max = Temp[i];
		}
		if (min >= Temp[i]) {
			min = Temp[i];
		}


	}
	float result = (min + max)/2;
	if (result > threshold)
		result = result - threshold;
	else
		result = 0;
	return result;*/
	float max = Temp[0];
	float min = Temp[0];
	int size = Temp.size();
	for (int i = 0; i < size; i++) {
		if (max < Temp[i]) {
			max = Temp[i];
		}
		if (min >= Temp[i]) {
			min = Temp[i];
		}


	}
	float result = (min + max) / 2;
	if (result > threshold)
		result = result - threshold;
	
	accumelative.push_back(result);

}

void clien::ave() {
	/*float ave = 0;
	for (int i = Temp.size - 5; i < Temp.size; i++) {
		ave += Temp[i];
	}
	ave = ave / 5;
	return ave;*/
	float ave = 0;
	int size = Temp.size();
	for (int i = 0; i < size; i++) {
		ave += Temp[i];
	}
	ave = ave / Temp.size();

	average.push_back(ave);

}

void clien::print() {
	cout << "Averge Temperature is  " << Temp.back() << "\n";
	cout << "************************************\n";
	cout << "ADD IS  " << accumelative.back() << "\n";

}


void Node::sense() 
{
	int low = -3;
	int high = 60;
	float temp = low + static_cast<float>(rand()) * static_cast<float>(high - low) / RAND_MAX;
	
		object[client_counter].Temp.push_back(temp);
	
}


Node::Node()
{
	clien tep;
	tep.id = 0;
	object.push_back(tep);
}
Node::~Node()
{
}
