//Programming Language Used: C++17
//Program to implement different Types of Arrays
#include<iostream>
using namespace std;
int main()
{
	//1-D Array
	int a[5] = { 1,2,3,4,5 };
	cout << "\n1-D Array: \n";
	for (size_t i{ 0 }; i < 5; i++)
	{
		cout << a[i] << " ";
	}

	//2-D Array [row][col]
	int b[2][3] = { {1,2,3},{4,5,6} };
	cout << "\n\n2-D Array: \n";
	for (size_t i{ 0 }; i < 2; i++)
	{
		for (size_t j{ 0 }; j < 3; j++)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}

	//3-D Array [block][row][col]
	int c[2][3][4] = { 
						{ //block 1
							{1,2,3,4}, {5,6,7,8}, {9,10,11,12}
						},
						{ //block 2
							{13,14,15,16}, {17,18,19,20}, {21,22,23,24}
						}
					 };
	cout << "\n\n3-D Array: \n";
	for (size_t i{ 0 }; i < 2; i++)
	{
		cout << "Block " << i + 1 << ": \n";
		for (size_t j{ 0 }; j < 3; j++)
		{
			for (size_t k{ 0 }; k < 4; k++)
			{
				cout << c[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << "\n";
	}
}