#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//DEQUE = Similar to lists and vector  
void deques(){
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(0);

    for (auto i : dq) {
        cout << i << " ";
    }
    cout << endl;

    dq.pop_back();
    dq.pop_front();  // Deletes element from the front.
    dq.back();
    dq.front();

    for (auto i : dq) {
        cout << i << " ";
    }
    cout << endl;

    // Rest all the functions are same as vector.
    //like begin, rbegin, clear, etc
}
int main(){
    deques();
}
