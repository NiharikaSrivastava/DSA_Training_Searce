//Program for Using Dynamic Programming to compute Fibbonaci Series using Bottom Up Approach
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int fib(int n)
{
    int a[8]; //array size of n+2
    a[0] = 0; //first index set to 0
    a[1] = 1; //fibonacci series starts from this element
    for (size_t i{ 2 }; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    return a[n];
}
int main()
{
    int n = 6;
    cout << "The "<< n << "th fibonacci number is: " <<fib(n)<<endl;
}