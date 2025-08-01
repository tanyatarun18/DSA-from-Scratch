#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Map hashing is just using the same technique as the array hashing but using map instead of array.
// So, in maps we have key and value pairs where key will represent the element and the value will represent the occurrence of element.

// Map_hashing becomes efficient than the array one as we have to create a maximum sized array which takes a lot of memory and 
//the element which does not have any occurence also takes space in memory but in maps we loop through the array and the elements
// we find we store it in the maps so the space is be occupied for those elements only who has occurrence.
// Also, maps stores in the sorrted order of keys (in hashing, the sorted order of elements not occurrence).

int main() {
    int arr[] = {1,2,4,3,5,6,7,7,4,2,3};
    int n = 11;

    map <int, int> m;
    for(int i=0; i<n; i++){
        m[arr[i]] ++;
    }

    int q = 6;
    while(q--){
        int query;
        cout << "Enter the query: ";
        cin >> query;

        cout <<"The no. of times the number occurs is: "<< m[query] <<endl;
    }
// Storing and fetching takes logN of time in all the cases(best, worst, average) in maps. 
// In map hashing, unordered map is preferred over map because it takes O(1) time in best and average cases but in worst case which
// is very rare it will take O(N) time.
// We can create maps any datatype like pairs, etc but in unordered map we cannot use pairs. It has to be single key, single value.
}