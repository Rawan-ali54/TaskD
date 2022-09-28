#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Client.h"
using namespace std;


class clien {

public:
	int id = 0;
	float threshold = 48;
	vector<float> average;
	vector<float> accumelative;
	vector<float> Temp;
	int time = 0;
	void ave();
	void acc();
	void print();


};

class Node
{
public:
	vector<clien> object;
	int node_id = 0;
	vector<float> temperature;
	string location="forest";
	
	void sense();
	Node();
	~Node();
};

