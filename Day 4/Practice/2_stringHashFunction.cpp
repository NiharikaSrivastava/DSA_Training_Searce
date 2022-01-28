//Program to conceptually implement hashing to store strings using array
#include<iostream>
#include <string>
using namespace std;
int hashFunction(string hashTable[], int size, string key)
{
	int index, radix, sumOfAscii{0};
	cout << endl;
	for (int i{ 0 }; i < size; i++)
	{
		for (int i{ 0 }; i < key.length(); i++) //conversion of string to ascii value
			sumOfAscii += (key[i] - NULL);
		sumOfAscii = sumOfAscii % size;
		radix = pow(128, i); //128 is radix for strings
		index = (sumOfAscii * radix) % size;  
		cout << "possible index for " << key << "=" << index << endl;
		if (hashTable[index]=="")
			break;
	}
	cout << "\n***** Final index for " << key << " = " << index << "*****" << endl;
	return index;
}
int main()
{
	string hashTable[7];
	int index=hashFunction(hashTable,7, "apple");
	hashTable[index] = "apple";
	index = hashFunction(hashTable, 7, "mango");
	hashTable[index] = "mango";
	index = hashFunction(hashTable, 7, "grapes");
	hashTable[index] = "grapes";
	index = hashFunction(hashTable, 7, "orange");
	hashTable[index] = "orange";
	index = hashFunction(hashTable, 7, "banana");
	hashTable[index] = "banana";
	cout << "\nFinal Hash Table:\n";
	for (int i{ 0 }; i < 7; i++)
		cout << "[" << i << "] -> " << hashTable[i] << endl;
}