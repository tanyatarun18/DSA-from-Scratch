#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//PRIORITY QUEUES follows that the largest element stays at the top, no matter which element goes first or last.
//This is also called Maximum Heap or Max Heap.
void priority_queues(){
    priority_queue<int> pq;
    
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(8);
    pq.emplace(5);

    cout << pq.top()<<endl; // Prints 8 as it the largest element.

    pq.pop(); // Deletes the topmost element i.e, the largest element (8).
    cout << pq.top()<<endl;  // Prints 5 i.e, the second largest after 8. Since 8 gets deleted so after that 5 gets printed.

    //Rest size, swap and empty function are same as others.


    //Minimum Heap or Min Heap - Follows that smallest element will always be at the top.
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(2);
    pq1.push(6);
    pq1.push(3);
    pq1.push(1);
    pq1.emplace(9);

    cout<<pq1.top(); // Prints 1 as it the smallest element so will come at the top.


}

int main(){
    priority_queues();
}