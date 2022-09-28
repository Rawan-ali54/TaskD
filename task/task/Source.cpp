#include<iostream>
#include<vector>
#include"Client.h"
#include"Node.h"
#include <Windows.h>
#include <time.h>
using namespace std;
static int node_counter = 0;
static int client_counter = 0;
struct client {


};
int main() {
	int milli_seconds = 1 * 1000;
	int wait = 5;
	Node Temp;
	
	while (1)
	{

		Temp.sense();
		Temp.object[client_counter].ave();
		Temp.object[client_counter].acc();
		if(time(0) % wait==0&&time(0)>5)
		{
			system("CLS");
			Temp.object[client_counter].print();
			
		}
		
		
		Sleep(milli_seconds);
	}








	system("pause");
	return 0;
}