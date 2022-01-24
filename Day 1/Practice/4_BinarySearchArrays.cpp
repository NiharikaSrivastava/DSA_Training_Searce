//Program to implement Binary Search in Arrays using Recursive Function
#include<iostream>
using namespace std;

int BinarySearchRecur(int a[], int n, int lo, int hi)
{
    if (lo <= hi)
    {
        int mid = (lo + hi) / 2; //accessing index of middle elemnt of array
        if (n == a[mid])
        {
            cout << n << " found at index " << mid;
            return 1;
        }
        else if (n < a[mid])
            return BinarySearchRecur(a, n, lo, mid - 1); //search in left subarray of middle element
        else
            return BinarySearchRecur(a, n, mid + 1, hi); //search in right subarray of middle element
    }
    else
    {
        cout << n << " was not found" << endl;
        return -1;
    }
}

int main()
{
    int a[] = { 10,20,30,40,50,60,70,80,90,100 };
    int len = sizeof(a) / sizeof(a[0]);
    int num;
    cout << "Enter number to search in array: ";
    cin >> num;
    BinarySearchRecur(a, num, 0, len - 1);
}