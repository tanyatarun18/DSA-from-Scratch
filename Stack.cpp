#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//STACKS = It follows LIFO(Last In First Out) which means that the elemnts which goes first inside will come out the last outside.
//Stacks does not support iterators because it is a container adaptor not a full fledged container so we cannot traverse through the stacks using iterators or for each loop. Stacks only support accessing the top element. 
//To traverse the whole stack, we use while loop and then prints the top elements and then remove that then again the next top element and so on.
void stacks(){
    stack <int> s;
    s.push(1);
    s.emplace(2);
    s.push(3);
    s.emplace(4);

    cout << s.top() << endl;  // Prints the element at the top i.e, the last element.
    s.pop(); // Deletes the elemnt at the top i.e, the last element.
    cout << s.top() << endl;

    cout << s.size() << endl; // Determines the size of stack.
    cout << s.empty() << endl; // Check if the stack is empty or not. Returns 1 if empty and 0 if not.

    stack <int> s1, s2;
    s1.swap(s2);  // Swaps two stacks.
}

int main(){
    stacks();
}
