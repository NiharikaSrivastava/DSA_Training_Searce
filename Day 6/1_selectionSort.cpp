//Program to perform selection sort on array
#include<iostream>
using namespace std;
int main()
{
    int a[] = { 4,3,-9,0,67,89,11,22,66,21 };
    int len = sizeof(a) / sizeof(a[0]);
    int min, temp;
    for (size_t i{ 0 }; i < len - 1; i++) //Finding the smallest element in unsorted subarray in every iteration and moving it to the sorted subarray
    {
        min = i;
        for (size_t j = i + 1; j < len; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[min]; //moving smallest element to sorted subarray
        a[min] = a[i];
        a[i] = temp;
    }
    cout << "The sorted array after Selection Sort is: ";
    for (int i = 0; i < len; i++)
        cout << a[i] << " ";
}
