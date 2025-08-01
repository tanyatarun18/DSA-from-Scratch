#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Given an array nums of size n which may contain duplicate elements, return a list of pairs where each pair contains a unique 
//element from the array and its frequency in the array.
//You may return the result in any order, but each element must appear exactly once in the output.

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    map <int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]] += 1;
    }
    
    vector <vector<int>> ans;
    for(auto i : mp){
        ans.push_back({i.first,i.second});
    }
    cout << "[";
    for(int i = 0; i < ans.size(); i++) {
        cout << "[" << ans[i][0] << ", " << ans[i][1] << "]";
        if(i != ans.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}