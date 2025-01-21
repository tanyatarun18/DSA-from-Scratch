#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Maps stores elements in keys and value way. It stores in sorted order of keys not values.
void maps(){
    map <int, int> m;
    map<int, pair<int,int>> m1; //Here values are in pair.
    map<pair<int,int>, int> m2; //Here we have pair keys.

    m[1] = 2;
    m.emplace(2,4);
    m.insert({3,4});
    

    m1[1] = {2,4};
    m2[{1,2}] = 5;

    for(auto i : m1){
        cout << i.first << " " << i.second.first << i.second.second << endl;
    }
    cout << m[2] << endl;

    auto it = m.find(3); // This is used to find the particular key.
    //If the key is not there, it will return null.
    cout << it->second;

    auto it = m.lower_bound(1);
    auto it = m.upper_bound(2);

    //Rest begin, rbegin, end, lower_bound, upper_bound, etc are same as vectors and set
}

int main(){
    maps();
}