#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//QUEUE = Similar to stack but follows FIFO (First In First Out) which means the element which goes first will come out first.
void queues(){
    queue <int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    q.emplace(4);

    cout<< q.front() << endl; //Prints 1 as it goes in first
    q.back() += 1; // Adds 1 to the last in element.
    cout << q.back() << endl; // print last in element i.e, 4+1= 5 cz of previous function.
    q.pop(); //Deletes the top element i.e, 1 bcz its the first one to enter and will be at the top.

    //Swap function is same as stack.     
}

int main(){
    queues();
}