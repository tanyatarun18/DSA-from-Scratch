#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//SETS store element in sorted order and stores only the unique elements. No duplicates or same element in one set.
void sets(){
    set<int> st;
    st.insert(4);
    st.insert(3);
    st.insert(7);
    st.insert(1);
    st.insert(5);

    for (auto i : st) {
        cout << i << " ";
    }
    cout << endl;

    auto a = st.find(4); // This points to the memory location of the element.  
    cout << *a << endl;

    //If the element is not present in the set, it will give a garbage value.


    st.erase(4); // Deletes 4 from the set.
    for (auto i : st) {
        cout << i << " ";
    }
    cout << endl;

    int b = st.count(3); // Counts for the occurrences of the element.
    //Since set stores unique element so if element is present it gives 1 and if not present it gives 0. 
    //Basically it also checks for element avialable or not.
    cout << b << endl;

    auto it = st.find(3);
    st.erase(it);
    // find function finds the element and then erase function deletes it.
    //It takes the constant time.
    for (auto i : st) {
        cout << i << " ";
    }
    cout << endl;

    auto it1 = st.find(1);
    auto it2 = st.find(5);
    st.erase(it1, it2);
    //deletes the element b/w it1 and it2, excluding it2. 


    for (auto i : st) {
        cout << i << " ";
    }
    cout << endl;

    st.insert(2);
    st.insert(6);
    st.insert(8);

    auto it3 = st.lower_bound(1);
    cout << *it3<< endl;

    //Lower bound point to the memory location of the element given and if the element is not present then the element just greater than that element will be printed.
    //If there's no greater element then it will print st.end();

    auto it4 = st.upper_bound(6);
    cout << *it4 << endl;

    //Upper bound point the memory location just greater than the given element. If the no greater element is present then st.end() will be printed.


    //Rest all the functions like rbegin, rend, begin, etc are same as vectors.
}

//MULTISET - Similar to set, it stores elements in sorted order but not unique.
// This means multiset can store multiple occurrences of same element.
void multisets(){
    multiset<int> mst;

    mst.insert(1);
    mst.emplace(4);
    mst.insert(2);
    mst.insert(1);
    mst.insert(2);
    mst.insert(5);

    for (auto i : mst) {
        cout << i << " ";
    }
    cout << endl;

    mst.erase(2); 
    //This deletes all the occurrences of a particular element.
    for (auto i : mst) {
        cout << i << " ";
    }
    cout << endl;

    int c = mst.count(1); //GIven the number of particular element present.
    cout << c << endl;

    mst.erase(mst.find(1));
    //Deletes only single occurrence of an element. Does not deletes all the occurence of element.
    for (auto i : mst) {
        cout << i << " ";
    }
    cout << endl;

    //Rest all the functions are same as sets.

}

//UNORDERED SET - Similiar to sets, stores unique elements but does not store in sorted order.
void unordered_sets(){
    unordered_set<int> ust;
    // All the functions are same as sets expect lower bound and upper bound.
    //These two does not work here.
    //Time complexity is better than sets in most of the cases.

}

int main(){
    sets();
    multisets();
    
}