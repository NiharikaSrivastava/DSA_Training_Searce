//Program to implement deletion in singly linked list
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
	void deleteFromFront()
	{
		if (head == NULL)
			cout << "Can't perform deletion as List is empty";
		else
			head = head->next;
	}
	void deleteFromLast()
	{
		if (head == NULL)
			cout << "Can't perform deletion as List is empty";
		else
		{
			Node* temp = head;
			while (temp->next->next != NULL)
				temp = temp->next;
			temp->next = NULL;
		}
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
	L.insert(10);
	L.insert(20);
	L.insert(30);
	L.insert(40);
	L.insert(50);
	L.insert(60);
	L.printLinkedList();
	L.deleteFromFront();
	L.printLinkedList();
	L.deleteFromFront();
	L.printLinkedList();
	L.deleteFromLast();
	L.printLinkedList();
	L.deleteFromLast();
	L.printLinkedList();
}