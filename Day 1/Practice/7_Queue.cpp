//Program to implement Queue using Array internally
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Queue
{
public:
	Queue() {
		front = rear = 0;
	}
	void enqueue(int element)
	{
		if (!isOverflow())
		{
			a[rear++] = element;
			cout << "Element " << element << " enqueued successfully" << endl;
		}
		else
			cout << "Sorry, element cannot be inserted due to Overflow";
	}
	void pop()
	{
		if (!isUnderflow())
		{
			int delElement = a[front];
			for (int i{ 0 }; i < rear - 1; i++)
				a[i] = a[i + 1];
			rear--;
			cout << delElement << " was successfully dequeued" << endl;
		}
		else
			cout << "Sorry, element cannot be deleted due to Underflow";
	}
	int peek()
	{
		if (!isUnderflow())
			return a[front];
		else
			cout << "Sorry, peek operation cannot be performed as queue is empty";
	}
	bool isOverflow()
	{
		int len = sizeof(a) / sizeof(a[0]);
		if (rear >= len - 1)
			return true;
		else
			return false;
	}
	bool isUnderflow()
	{
		if (front==rear)
			return true;
		else
			return false;
	}
	void display()
	{
		if (!isUnderflow())
		{
			for (int i{ front }; i < rear; i++)
				cout << a[i] << " ";
			cout << endl;
		}
		else
			cout << "\nEmpty Queue" << endl;
	}
	int front,rear;
	int a[10];
};

int main()
{
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.display();
	q.enqueue(40);
	q.display();
	q.pop();
	q.display();
	cout<<"Element at front of queue: "<<q.peek()<<endl;
}