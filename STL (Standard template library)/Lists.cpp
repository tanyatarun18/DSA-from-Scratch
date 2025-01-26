#include <iostream>
#include <bits/stdc++.h>
#include <list>
using namespace std;


// LIST - Similar to a vector, but it provides front operations like arithmetic operations.
void lists() {
    list<int> ls;

    ls.push_back(1);
    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(0);  // Insert element at the front
    ls.emplace_front(4);

    for (auto i : ls) {
        cout << i << " ";
    }
    cout << endl;

    // Rest all the operations are the same as vectors like begin, rbegin, size, etc.
}
int main(){
    lists();
}