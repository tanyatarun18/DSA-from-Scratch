// remove duplicates in place from sorted array.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// int main(){
//     int arr[] = {0,2,2,4,4,5,6,6,8};
//     int n = 9;
//     set <int> ans;

//     for(int i=0; i<n; i++){
//         ans.insert(arr[i]);
//     }
//     for(auto i : ans){
//         cout << i << ",";
//     }
// }

// this is not an optimal approach as it takes o(n log n) time complexity and o(n) space complexity.
//Optimal approach

int main(){
    int arr[] = {0,2,2,4,4,5,6,6,8};
    int n = 9;

    int i=0;
    for(int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    for(int k=0; k<=i; k++){
        cout << arr[k] << ",";
    }
}