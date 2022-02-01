//Program to perform insertion sort on array
#include<iostream>
using namespace std;
int main()
{
    int a[] = { 4,3,-9,0,67,89,11,22,66,21 };
    int len = sizeof(a) / sizeof(a[0]);
    int curr, j;
    for (size_t i{ 1 }; i < len; i++)
    {
        curr = a[i];
        j = i;
        while (j > 0 && a[j - 1] > curr) //Move elements of a[0..i-1], that are greater than curr, to one position ahead of their current position
        {
            a[j] = a[j - 1];
            a[j - 1] = curr;
            j--;
        }
    }
    cout << "The sorted array after Insertion Sort is: ";
    for (int i = 0; i < len; i++)
        cout << a[i] << " ";
}
