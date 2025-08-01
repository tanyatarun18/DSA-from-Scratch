#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//FIND THE OCCURENCE OF CHARACTERS IN STRING USING MAP HASHING.

int main() {
    string s = "asdfghjnvbcdsewtunodgerqcnaoshfaaaairytqd";
    map <char, int> m;
    for(int i=0; i<s.size(); i++){
        m[s[i]] += 1;
    }

    int q = 6;
    while(q--){
        char query;
        cout << "Enter the query: ";
        cin >> query;

        cout <<"The no. of times the character occurs is: "<< m[query] <<endl;
    }
}