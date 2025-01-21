#include <bits/stdc++.h> // Include all standard libraries
#include <list> // Include <list> for std::list
using namespace std;

void pairs() {
    // Create a pair
    pair<int, int> p = {7, 19};  // Syntax is OK; ensure the compiler supports modern C++
    cout << p.first << "," << p.second << endl; // You cannot print through a single variable p. You have to print separately.

    pair<int, pair<int, int>> p1 = {1, {2, 3}}; // This is how we write when we want to store more than 2 in a pair.
    cout << p1.first << "," << p1.second.first << "," << p1.second.second << endl; // This is how we print when multiple pairs are there.

    // How to declare a pair array.
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    cout << arr[1].first << endl;  // Here we are accessing the first value of the second array.
    cout << arr[0].first << endl;  // Here we are accessing the first value of the first array.
}

int main() {
    // pairs();
    
    return 0;
}

