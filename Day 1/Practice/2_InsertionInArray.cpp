//Program to implement insertion of elements in arrays at different positions
#include<iostream>
using namespace std;

void display(int a[], int size); //function declarations
void insertAtBeginning(int a[], int size);
void insertAtEnd(int a[], int size);
void insertAtAnyPosition(int a[], int size);

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
	display(a,size);
	//insertAtBeginning(a, size);
	//insertAtEnd(a, size);
	insertAtAnyPosition(a, size);
}

void insertAtBeginning(int a[], int size)
{
	int element;
	cout << "\n\nEnter element to insert at beginning of array: ";
	cin >> element;
	size++;
	for (int i{ size - 1 }; i > 0; i--) //shifting each element one step forward
		a[i] = a[i - 1];
	a[0] = element; //inserting new element at beginning of array
	cout << "1. Inserting element at beginning of array: \n";
	display(a, size);
}
 
void insertAtEnd(int a[], int size)
{
	int element;
	cout << "\n\nEnter element to insert at end of array: ";
	cin >> element;
	size++; 
	a[size-1] = element; //inserting new element directly at end of array
	cout << "2. Inserting element at end of array: \n";
	display(a, size);
}

void insertAtAnyPosition(int a[], int size)
{
	int element;
	unsigned int pos;
	cout << "\n\nEnter element to insert in array: ";
	cin >> element;
	cout << "\n\nEnter position where the element needs to be inserted: ";
	cin >> pos;
	size++;
	for (int i{ size - 1 }; i > pos-1; i--) //shifting each element after position's index by one step forward
		a[i] = a[i - 1];
	a[pos-1] = element; //inserting new element at the index of specified position
	cout << "3. Inserting element at specified position of array: \n";
	display(a, size);
}

void display(int a[],int size)
{
	for (size_t i{ 0 }; i < size; i++)
		cout << a[i] << " ";
}