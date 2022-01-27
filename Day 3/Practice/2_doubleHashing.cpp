//Program to conceptually implement hashing through double hashing method using array 
#include<iostream>
using namespace std;
int hashFunction(int hashTable[], int size, int key)
{
	int index;
	cout << endl;
	for (int i{ 0 }; i < size; i++)
	{
		index = (key + i*(7-(key%7))) % size; //7 is the immediate smaller co-prime number than the size of hash table i.e., 11
		cout << "possible index for " << key << "=" << index << endl;
		if (hashTable[index] == -1)
			break;
	}
	cout << "\n***** Final index for " << key << " = " << index << "*****" << endl;
	return index;
}
int main()
{
	int hashTable[11] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
	int index = hashFunction(hashTable, 11, 50);
	hashTable[index] = 50;
	index = hashFunction(hashTable, 11, 700);
	hashTable[index] = 700;
	index = hashFunction(hashTable, 11, 76);
	hashTable[index] = 76;
	index = hashFunction(hashTable, 11, 85);
	hashTable[index] = 85;
	index = hashFunction(hashTable, 11, 92);
	hashTable[index] = 92;
	index = hashFunction(hashTable, 11, 73);
	hashTable[index] = 73;
	index = hashFunction(hashTable, 11, 101);
	hashTable[index] = 101;
	cout << "\nFinal Hash Table:\n";
	for (int i{ 0 }; i < 11; i++)
	{
		if(hashTable[i]!=-1)
			cout << "[" << i << "] -> " << hashTable[i] << endl;
		else
			cout << "[" << i << "] -> " << endl;
	}
}