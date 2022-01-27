#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int N;
    cin >> N;
    vector<pair<int,int>> v(N); //vector of pair<orderTime,cookingTime>
    for (int i = 0; i < N; ++i) 
        scanf_s("%d%d", &v[i].first, &v[i].second); 
    sort(v.begin(), v.end()); //sort in terms of orderTime
    int serveTime = v[0].first; //initialize with first orderTime
    pair<int, int> order;
    int averageWT;
    int totalWaitingTime = 0;
    set<pair<int, int>> cookQueue; //set stores elements in sorted order always
    int iter = 0;
    while (iter < N || cookQueue.size())
    {
        while (iter < N && v[iter].first <= serveTime) //for the first element, this loop runs only once
        {
            order = make_pair(v[iter].second, iter); //pair<cookTime,index>, first element is cookTime such that lowest cookTime is stored at beginning always
            cookQueue.insert(order);
            ++iter;
        }
        if (cookQueue.empty()) //when the queue is empty due to gap between arrival time of orders, move to next order
            serveTime = v[iter].first;
        else 
        {
            int i = cookQueue.begin()->second; //index of cookTime
            cookQueue.erase(cookQueue.begin()); //remove current order from set
            serveTime += v[i].second; //accessing cookTime through index
            totalWaitingTime += serveTime - v[i].first; //serve time - order time
        }
    }
    averageWT = totalWaitingTime / N;
    cout << averageWT << endl;
    return 0;
}