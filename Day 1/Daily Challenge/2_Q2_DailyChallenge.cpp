#include<iostream>
using namespace std;
typedef unsigned int uint;

class Node
{
public:
	int data;
	Node* next;
};

class LinkedList
{
private:
	Node* head;
public:
	LinkedList()
	{
		head = NULL;
	}
	void insert(int element)
	{
		Node* n = new Node;
		n->data = element;
		n->next = NULL;
		if (head == NULL)
			head = n;
		else
		{
			Node* temp = head;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = n; 
		}
	}
	void printLinkedList()
	{
		Node* temp = head;
		if (temp == NULL)
			cout << "Empty Linked List\n";
		else
		{
			while (temp != NULL)
			{
				cout << temp->data << endl;
				temp = temp->next;
			}
		}
	}
};

int main()
{
	LinkedList L;
	uint P, element;
	cout << "Enter No. of Elements in Linked List: ";
	cin >> P;
	cout << "Enter all elements: ";
	for (size_t i{ 0 }; i < P; i++)
	{
		cin >> element;
		L.insert(element);
	}
	cout << "Printing the Linked List: " << endl;
	L.printLinkedList();
}