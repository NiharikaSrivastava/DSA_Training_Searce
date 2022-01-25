//Program to implement queue using singly linked list
#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
};

class Queue
{
private:
	Node* head;
public:
	Queue()
	{
		head = NULL;
	}
	void enqueue(int element) //insert at rear
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
		cout << element << " enqueued succesfully" << endl;
	}
	void dequeue() //delete from front
	{
		if (head == NULL)
			cout << "Can't perform deletion, Underflow";
		else
		{
			int temp = head->data;
			head = head->next;
			cout << endl << temp << " dequeued succesfully" << endl;
		}
	}
	void printQueue()
	{
		Node* temp = head;
		if (temp == NULL)
			cout << "Empty Queue\n";
		else
		{
			cout << "\nPrinting the Queue: " << endl;
			cout << "front -> ";
			while (temp != NULL)
			{
				cout << temp->data << " ";
				temp = temp->next;
			}
			cout << " <- rear";
			cout << endl;
		}
	}
};

int main()
{
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.printQueue();
	q.enqueue(40);
	q.enqueue(50);
	q.printQueue();
	q.dequeue();
	q.printQueue();
	q.dequeue();
	q.printQueue();
}