//Program to implement Stack using Array internally
#include<iostream>
using namespace std;

class Stack
{
public:
	Stack(){
		top=-1;
	}
	void push(int element)
	{
		if (!isOverflow())
		{
			a[++top] = element;
			cout << "Element " << element << " pushed successfully" << endl;
		}
		else
			cout << "Sorry, element cannot be inserted due to Overflow";
	}
	void pop()
	{
		if (!isUnderflow())
		{
			int delElement = a[top--];
			cout << delElement << " was successfully popped" << endl;
		}
		else
			cout << "Sorry, pop operation cannot be performed due to Underflow";
	}
	int peek()
	{
		if (!isUnderflow())
			return a[top];
		else
			cout << "Sorry, peek operation cannot be performed as stack is empty";
	}
	bool isOverflow()
	{
		int len = sizeof(a) / sizeof(a[0]);
		if (top >= len - 1)
			return true;
		else
			return false;
	}
	bool isUnderflow()
	{
		if (top < 0)
			return true;
		else
			return false;
	}
	void display()
	{
		if (!isUnderflow())
		{
			for (int i{ top }; i >= 0; i--)
				cout << a[i] << " ";
			cout << endl;
		}
		else
			cout << "\nEmpty Stack" << endl;
	}
	int top;
	int a[100];
};

int main()
{
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.display();
	s.pop();
	s.pop();
	cout << "Element at top: " << s.peek() << endl;
	s.pop();
	s.pop();
	s.display();
}