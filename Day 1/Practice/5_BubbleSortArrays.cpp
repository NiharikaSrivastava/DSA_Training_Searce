//Program to perform bubble sort on array
#include<iostream>
using namespace std;

int main()
{
    int a[] = { 4,3,-9,0,67,89,11,22,66,21 };
    int len = sizeof(a) / sizeof(a[0]);
    int temp;
    for (int i{ 1 }; i < len; i++) //number of iterations
    {
        for (int j = 0; j < len - i; j++) //with each pass, the heaviest element settles at the bottom
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "The sorted array after Bubble Sort is: ";
    for (int i = 0; i < len; i++)
        cout << a[i] << " ";
}
