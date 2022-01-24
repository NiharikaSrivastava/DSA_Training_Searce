//Program to implement deletion of elements in arrays at different positions
#include<iostream>
using namespace std;

void display(int a[], int size); //function declarations
void deletionAtBeginning(int a[], int size);
void deletionAtEnd(int a[], int size);
void deletionAtAnyPosition(int a[], int size);

int main()
{
	int a[10];
	unsigned int size;
	cout << "Enter size of array: ";
	cin >> size;
	cout << "Enter elements of array: ";
	for (size_t i{ 0 }; i < size; i++)
		cin >> a[i];
	cout << "\nOriginal Array: \n";
	display(a, size);
	//deletionAtBeginning(a, size);
	//deletionAtEnd(a, size);
	deletionAtAnyPosition(a, size);
}

void deletionAtBeginning(int a[], int size)
{
	for (size_t i{0}; i < size-1; i++) //shifting each element one step backward
		a[i] = a[i + 1];
	size--;
	cout << "\n1. Deleting element from beginning of array: \n";
	display(a, size);
}

void deletionAtEnd(int a[], int size)
{
	size--;
	cout << "\n2. Deleting element from end of array: \n";
	display(a, size);
}

void deletionAtAnyPosition(int a[], int size)
{
	int pos;
	cout << "\n\nEnter position from where the element needs to be deleted: ";
	cin >> pos;
	for (int i{ pos - 1 }; i < size - 1; i++) //shifting each element one step backward after the index of the position of element to be deleted
		a[i] = a[i + 1];
	size--;
	cout << "3. Deleting element from specified position of array: \n";
	display(a, size);
}

void display(int a[], int size)
{
	for (size_t i{ 0 }; i < size; i++)
		cout << a[i] << " ";
}