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

	int col;
	cout << "Please , enter the length of array: " << endl;
	cin >> col;

	const char *ZName = "E:\\universe\\оаип(лабы)\\лаба 9\\Project1\\Project2\\members.txt";
	ifstream in;
	in.open(ZName, ios::binary);

	WORKER *pmember1 = new WORKER[col];

	in.read((char *)pmember1, col * sizeof(WORKER));

	for (int j = 0; j < col; j++)
	{
		if ((pmember1 + j)->salary < 200)
		{

			cout << "Name: " << (pmember1 + j)->name << endl;
			cout << "Job: " << (pmember1 + j)->position << endl;
			cout << "Phone number: " << (pmember1 + j)->number << endl;
			cout << "Salary: " << (pmember1 + j)->salary << endl;
			cout << endl;

		}
	}

	in.close();
	delete[] pmember1;


	system("Pause");
	return 0;
}
