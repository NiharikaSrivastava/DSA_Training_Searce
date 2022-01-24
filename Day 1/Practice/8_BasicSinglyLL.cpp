//Program to implement formation of Singly Linked List
#include<iostream>
using namespace std;

class Node //each Node of Linked List
{
	public:
	int data; //actual data
	Node* next; //address of next Node
};

void displayLL(Node* n)
{
	while (n != NULL)
	{
		cout << n->data <<" ";
		n = n->next;
	}
}

int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	head = new Node();
	second = new Node();
	third = new Node();
	head->data = 10;
	head->next = second;
	second->data = 20;
	second->next = third;
	third->data = 30;
	third->next = NULL;
	displayLL(head);
}