//Program to perform bucket sort on array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    float a[] = { 0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434 };
    int len{ 6 };
    vector<float> b[6]; 
    for (int i = 0; i < len; i++) //Putting array elements in different buckets 
    {
        int bucketIndex = len * a[i]; 
        b[bucketIndex].push_back(a[i]);
    }
    for (int i = 0; i < len; i++) //sorting individual buckets
        sort(b[i].begin(), b[i].end());
    int index = 0;
    for (int i = 0; i < len; i++) //Concatenating all buckets into arr[]
        for (int j = 0; j < b[i].size(); j++)
            a[index++] = b[i][j];
    cout << "The sorted array after Bucket Sort is: ";
    for (int i = 0; i < len; i++)
        cout << a[i] << " ";
}
