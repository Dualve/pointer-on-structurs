#include <iostream>

using namespace std;


int main()
{
	const int AMOUNT = 100; 
	int row, col, choice;


	setlocale(LC_ALL, "Rus");
	system("color F0");

	int arr[AMOUNT]{ 16, 78, 99, 6, -29, 19, -52, 65, -88, 51,

	  -79, -22, 32, -25, -62, -69, -2, -59, -75, 89,

	  -87, 95, -22, 85, -49, -75, 76, 73, -59, -52,

	   30, 49, -28, -48, 0, 57, -6, -85, 0, -18,

	  -97, -21, -95, 64, 22, -2, 69, -84, -1, -71,

	  -25, 47, 72, 43, 15, -44, 44, 61, 4, 74,

	   88, -61, 0, -64, -83, 97, 0, 90, 15, 8,

	  -54, 19, 73, 35, -67, -87, 85, -99, -70, 10,

	   98, 58, -10, -29, 95, 62, 77, 89, 36, -32,

	   78, 60, -79, -18, 30, -13, -34, -92, 1, -38 };

	while (true)
	{
		cout << "�������, ���������� ������� * ���������� ����� = 100" << endl;
		cout << "������� ���������� ����� � �������: " << endl;
		cin >> row;
		cout << "������� ���������� ������� � �������: " << endl;
		cin >> col;

		if (col*row == AMOUNT)
		{

			int *parr = &arr[0];
			int **pnew_arr;
			pnew_arr = new int*[row];

			for (int i = 0; i < row; i++)
			{
				pnew_arr[i] = new int[col];
			}

			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					*(*(pnew_arr + i)+j) = *(parr + (i * col + j ));
					
				}
			}

			for (int i = 0; i < row; i++)
			{
				for (int k = 0; k < col; k++)
				{
					cout << *(*(pnew_arr+i)+k) << "\t";
				}
				cout << endl;
			}

			for (int i = 0; i < row; i++)
			{
				for (int k = 0; k < col; k++)
				{
					if ( *(*(pnew_arr+i)+k) > 50)
					{
						cout << *(*(pnew_arr+i)+k) << " - ����� ������ 50 ����� ��������� �����: " << *(pnew_arr+i)+k << endl;
					}
				}
			}

			for (int i = 0; i < row; i++)
			{
				delete[] pnew_arr[i];
			}
			delete[] pnew_arr;
		}

		else
		{
			cout << "������� �������� ���������� ����� � ���������." << endl;
		}

		cout << "������ ����������� ��� ���?(1 - ��/2 - ���)" << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "�������� ��������." << endl;
		}
		else if(choice == 2)
		{
			cout << "�����." << endl;
			break;
		}
		
	}

	system("Pause");
	return 0;
}

