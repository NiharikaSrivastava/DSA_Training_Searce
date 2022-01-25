#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Stack
{
public:
	Stack() {
		top = -1;
		maxElement = 0;
		maxTop = -1;
	}
	void push(int element)
	{
		if (!isOverflow())
		{
			++top;
			s.push_back(element);
			if (maxElement < element)
			{
				++maxTop;
				maxArray.push_back(element);
			}
		}
		else
			return;
	}
	void pop()
	{
		if (!isUnderflow())
		{
			int remElement = s[top];
			s.pop_back();
			--top;
			if (remElement == maxArray[maxTop])
			{
				maxArray.pop_back();
				--maxTop;
			}
		}
		else
			return;
	}
	vector<int> getMax()
	{
		resArray.push_back(maxArray[maxTop]); 
		return resArray; //array containing all outputs from query 3
	}
	bool isOverflow()
	{
		int maxLen = s.max_size();
		if (top >= maxLen - 1)
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
private:
	int top, maxTop;
	vector<int> s; //actual stack
	int maxElement;
	vector<int> maxArray; //stack to keep track of max element
	vector<int> resArray;
};

int main()
{
	Stack stack;
	long n;
	long long x;
	int type;
	string inputStr;
	cin >> n;
	vector<string> operations;
	operations.reserve(n);
	vector<int> result;
	while (n >= 0) //Storing User Input for each test case
	{
		getline(cin, inputStr);
		operations.push_back(inputStr);
		--n;
	}
	for (int i{ 0 }; i < operations.size(); i++) //Accessing every element in operations array and performing corresponding operation
	{
		stringstream strStream(operations[i]); //converting string input to integer
		strStream >> type;
		if (type == 1)
			strStream >> x;
		switch (type)
		{
		case 1:
		{
			stack.push(x);
			break;
		}
		case 2:
		{
			stack.pop();
			break;
		}
		case 3:
		{
			result = stack.getMax();
			break;
		}
		default:
			break;
		}
	}
	for (int i{ 0 }; i < result.size(); i++) //Displaying Output 
		cout << result[i] << endl;
}