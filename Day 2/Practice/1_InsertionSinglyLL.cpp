//Program to implement insertion in singly linked list
#include<iostream>
using namespace std;

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
	void insertAtLast(int element)
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
	void insertAtFront(int element)
	{
		Node* n = new Node;
		n->data = element;
		n->next = NULL;
		if (head == NULL)
			head = n;
		else
		{
			n->next = head;
			head = n;
		}
	}
	void printLinkedList()
	{
		Node* temp = head;
		if (temp == NULL)
			cout << "Empty Linked List\n";
		else
		{
			cout << "\nPrinting the Linked List: " << endl;
			while (temp != NULL)
			{
				cout << temp->data << " ";
				temp = temp->next;
			}
			cout << endl;
		}
	}
};

int main()
{
	LinkedList L;
	L.insertAtLast(10);
	L.insertAtLast(20);
	L.insertAtLast(30);
	L.printLinkedList();
	L.insertAtFront(40);
	L.insertAtFront(50);
	L.printLinkedList();
}