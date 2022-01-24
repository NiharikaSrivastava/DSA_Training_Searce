//Q1. Reverse an Integer Array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned int uint;

vector<uint> reverseArray(vector<uint> P, uint Q)
{
	uint temp;
	if (Q == 1) //single element in array
		return P;
	for (size_t i{ 0 }, j{ Q - 1 }; i <= j; i++, j--) //using double indices to refer to start and end of array
	{
		temp = P[i]; //swapping
		P[i] = P[j];
		P[j] = temp;
	}
	return P;
}

void displayArray(vector<uint> P, uint Q)
{
	for (int i{ 0 }; i < Q; i++)
		cout << P[i] << " ";
}

int main()
{
	uint Q;
	vector<uint> P; //Using vactor(dynamic array) to take size of array from user input
	vector<uint> revP;
	cin >> Q; 
	P.reserve(Q);
	for (auto i{ 0 }; i < Q; i++)
		P.push_back(i + 1);
	cout << "\nOriginal Array: \n";
	displayArray(P, Q);
	revP=reverseArray(P,Q);
	cout << "\nArray after reversal: \n";
	displayArray(revP, Q);
}