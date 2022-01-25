//Program to implement queue using singly linked list and seperate pointers for front and rear nodes
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
	Node* front;
	Node* rear;
public:
	Queue()
	{
		front = NULL;
		rear = NULL;
	}
	void enqueue(int element) //insert at rear (no need of traversal for insertion every time as we maintain rear pointer)
	{
		Node* n = new Node;
		n->data = element;
		n->next = NULL;
		if (rear == NULL)
			front = rear = n;
		rear->next = n;
		rear = n;
		cout << element << " enqueued succesfully" << endl;
	}
	void dequeue() //delete from front
	{
		if (front == NULL)
			cout << "Can't perform deletion, Underflow";
		else
		{
			int temp = front->data;
			front = front->next;
			cout << endl << temp << " dequeued succesfully" << endl;
		}
	}
	void printQueue()
	{
		Node* temp = front;
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
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.printQueue();
	q.enqueue(4);
	q.enqueue(5);
	q.printQueue();
	q.dequeue();
	q.printQueue();
	q.dequeue();
	q.printQueue();
}