//Program to implement stack using singly linked list
#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
};

class Stack
{
private:
	Node* head;
public:
	Stack()
	{
		head = NULL;
	}
	void push(int element)
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
		cout << element << " pushed succesfully" << endl;
	}
	void pop()
	{
		if (head == NULL)
			cout << "Can't perform deletion, Stack Underflow";
		else
		{
			int temp = head->data;
			head = head->next;
			cout << temp << " popped succesfully" << endl;
		}
	}
	void printStack()
	{
		Node* temp = head;
		if (temp == NULL)
			cout << "Empty Stack\n";
		else
		{
			cout << "\nPrinting the Stack: " << endl;
			cout << "top-> ";
			while (temp != NULL)
			{
				cout << temp->data << endl;
				temp = temp->next;
			}
			cout << endl;
		}
	}
};

int main()
{
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.printStack();
	s.pop();
	s.printStack();
	s.pop();
	s.printStack();
}