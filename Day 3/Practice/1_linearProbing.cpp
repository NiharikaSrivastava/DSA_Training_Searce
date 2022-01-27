//Program to conceptually implement hashing through linear probing using array 
#include<iostream>
using namespace std;
int hashFunction(int hashTable[], int size, int key)
{
	int index;
	cout << endl;
	for (int i{ 0 }; i < size; i++)
	{
		index = (key + i) % size;
		cout << "possible index for " << key << "=" << index << endl;
		if (hashTable[index]==-1)
			break;
	}
	cout << "\n***** Final index for " << key << " = " << index << "*****" << endl;
	return index;
}
int main()
{
	int hashTable[7] = {-1,-1,-1,-1,-1,-1,-1};
	int index=hashFunction(hashTable,7,50);
	hashTable[index] = 50;
	index = hashFunction(hashTable, 7, 700);
	hashTable[index] = 700;
	index = hashFunction(hashTable, 7, 76);
	hashTable[index] = 76;
	index = hashFunction(hashTable, 7, 85);
	hashTable[index] = 85;
	index = hashFunction(hashTable, 7, 92);
	hashTable[index] = 92;
	index = hashFunction(hashTable, 7, 73);
	hashTable[index] = 73;
	index = hashFunction(hashTable, 7, 101);
	hashTable[index] = 101;
	cout << "\nFinal Hash Table:\n";
	for (int i{ 0 }; i < 7; i++)
		cout << "[" << i << "] -> " << hashTable[i] << endl;

}