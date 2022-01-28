//Program to conceptually implement hashing through separate chaining 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Hash
{
public:
    Hash(int s)
    {
        tableSize = s;
        hashTable = new list<int>[tableSize]; //storing linked list at each index of the hash table
    }
    int hashFunction(int x)
    {
        return (x % tableSize);
    }
    void insertItem(int key)
    {
        int index = hashFunction(key);
        hashTable[index].push_back(key);
    }
    void displayHash()
    {
        cout << "Hash Table: " << endl;
        for (int i = 0; i < tableSize; i++)
        {
            cout << i;
            for (int value : hashTable[i]) //displaying linked list stored at each index of hash table 
                cout << " --> " << value;
            cout << endl;
        }
    }
private:
    int tableSize;
    list<int>* hashTable; //pointer to the hashTable
};

int main()
{
    int a[] = { 50, 700, 76, 85, 92, 73, 101 };
    int n = sizeof(a) / sizeof(a[0]);
    Hash hashTable(7);   
    for (int i = 0; i < n; i++)
        hashTable.insertItem(a[i]);
    hashTable.displayHash();
}