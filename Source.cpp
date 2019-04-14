#include <iostream>
#include <fstream>

using namespace std;


int main()
{

	setlocale(LC_ALL, "Rus");
	system("color F0");

	struct WORKER
	{
		char name[15];
		char position[15];
		char number[15];
		int salary;
	};

	const int NUM = 10;

	WORKER *arr[10];

	//const char *ZName = "E:\\universe\\оаип(лабы)\\лаба 9\\Project1\\Project2\\members.txt";
	//ifstream in;
	//in.open(ZName, ios::binary);

	FILE *ZName;
	fopen_s(&ZName, "E:\\universe\\оаип(лабы)\\лаба 9\\Project1\\Project2\\members.txt", "r+b");

	//
	for(int i = 0; i < NUM; i++)
	{
		arr[i] = new WORKER;
	}
	//

	for(int i = 0; i < NUM; i++)
	{
		//arr[i] = new WORKER;
		//in.read((char *)(arr+i), sizeof(WORKER));
		fread(arr[i], sizeof(*arr[i]), 1, ZName);
		//in >> arr[i]->name;
		//in >> arr[i]->position;
		//in >> arr[i]->number;
		//in >> arr[i]->salary;
		cout << "Name: " << arr[i]->name << endl;
		cout << "Job: " << arr[i]->position << endl;
		cout << "Phone number: " << arr[i]->number << endl;
		cout << "Salary: " << arr[i]->salary << endl;
		cout << endl;
	}

	//for (int i = 0; i < NUM; i++)
	//{
	//	cout << arr[i]->name << endl;
	//	cout << arr[i]->position << endl;
	//	cout << arr[i]->number << endl;
	//	cout << arr[i]->salary << endl;
	//}

	for (int i = 0; i < 10 ; i++)
	{
		delete[] arr[i];
	}

	fclose(ZName);
	//in.close();



	system("Pause");
	return 0;
}
