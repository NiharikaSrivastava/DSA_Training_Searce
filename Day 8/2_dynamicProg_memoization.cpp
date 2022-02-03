//Program for Using Dynamic Programming to compute Fibbonaci Series using Memoization Approach
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int a[10];
int fib(int n)
{
    if (n <= 1)
        return n;
    if (a[n] != 0) // if fib(n) has already been computed we don't need further recursive calls
        return a[n];
    else 
        a[n] = fib(n - 1) + fib(n - 2);
    return a[n];
}
int main()
{
    int n = 6;
    cout << "The " << n << "th fibonacci number is: " << fib(n) << endl;
}