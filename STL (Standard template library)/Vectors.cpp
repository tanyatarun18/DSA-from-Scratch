<<<<<<< HEAD
#include <bits/stdc++.h> // Include all standard libraries
#include <vector>
using namespace std;

//VECTORS - A STL Container which is dynamic in nature and whose size is not fixed.
void vectors() {
    vector<int> v;   // Declaring a vector
    v.push_back(2);  // Using push_back, we insert the elements in the vector.
    v.emplace_back(3);  // Does the same thing as push_back. It dynamically increases the size as it pushes the elements at the back.
                        // It is faster than push_back because emplace directly constructs the object in the vector,
                        // but push_back creates an anonymous object and then copies that to the vector.

    // Vector of pair data type
    vector<pair<int, int>> vec;   // Declaration
    vec.push_back({1, 2});
    vec.emplace_back(2, 3);   // Here curly braces are not required to make the compiler understand it's a pair, unlike push_back.

    vector<int> v0(5, 50);  // This creates a vector of size 5 with 50 as the element in each place, like {50, 50, 50, 50, 50}.
    vector<int> v1(5);   // This creates a vector of size 5. Its size is not fixed; you can add more elements later.
    vector<int> v2(v1);  // This is how you create a copy of another vector.

    // Accessing the elements of the vector - accessed as arrays
    cout << v0[1] << endl;
    cout << v0.at(0) << endl;
    cout << v.back() << endl;  // Points to the last element

    // Another way to access elements of vectors is by using iterators. Iterators point to the memory address.
    vector<int>::iterator a = v.begin();  // Points to the start of the vector
    a++;    // Shifts the iterator to the next element
    cout << *(a) << endl;

    // Reverse iterators
    vector<int>::reverse_iterator rend = v.rend(); // Reverse end points to the memory before the first element.
    vector<int>::reverse_iterator rbegin = v.rbegin(); // Reverse begin points to the last element.

    // Print elements using reverse iterators
    for (auto it = rbegin; it != rend; ++it) {
        cout << *(it) << " "; // Access elements in reverse
    }
    cout << endl;

    // Access the whole vector - can be done using loops or iterators.
    // Using iterators
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    // Using range-based for loop
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Deleting an element from the vector
    v.erase(v.begin());  // Deletes the first element

    if (v.size() > 2) {
        v.erase(v.begin(), v.end() - 2);   // Deletes multiple elements from a range
    }

    // Inserting an element at a particular position
    v.insert(v.begin(), 20);  // Insert 20 at the beginning
    v.insert(v.begin() + 1, 3, 25); // Insert 3 copies of 25 starting at position 1

    vector<int> newv(2, 25);
    v.insert(v.begin() + 1, newv.begin(), newv.end()); // Insert elements of newv into v at position 1

    cout << "Size of vector: " << v.size() << endl;

    // Other operations
    v.pop_back(); // Remove the last element
    v.swap(newv);  // Swap contents of two vectors
    v.clear();  // Clear all elements
    cout << "Is vector empty? " << (v.empty() ? "Yes" : "No") << endl;
}
int main(){
    vectors();
}
=======
#include <bits/stdc++.h> // Include all standard libraries
#include <vector>
using namespace std;

//VECTORS - A STL Container which is dynamic in nature and whose size is not fixed.
void vectors() {
    vector<int> v;   // Declaring a vector
    v.push_back(2);  // Using push_back, we insert the elements in the vector.
    v.emplace_back(3);  // Does the same thing as push_back. It dynamically increases the size as it pushes the elements at the back.
                        // It is faster than push_back because emplace directly constructs the object in the vector,
                        // but push_back creates an anonymous object and then copies that to the vector.

    // Vector of pair data type
    vector<pair<int, int>> vec;   // Declaration
    vec.push_back({1, 2});
    vec.emplace_back(2, 3);   // Here curly braces are not required to make the compiler understand it's a pair, unlike push_back.

    vector<int> v0(5, 50);  // This creates a vector of size 5 with 50 as the element in each place, like {50, 50, 50, 50, 50}.
    vector<int> v1(5);   // This creates a vector of size 5. Its size is not fixed; you can add more elements later.
    vector<int> v2(v1);  // This is how you create a copy of another vector.

    // Accessing the elements of the vector - accessed as arrays
    cout << v0[1] << endl;
    cout << v0.at(0) << endl;
    cout << v.back() << endl;  // Points to the last element

    // Another way to access elements of vectors is by using iterators. Iterators point to the memory address.
    vector<int>::iterator a = v.begin();  // Points to the start of the vector
    a++;    // Shifts the iterator to the next element
    cout << *(a) << endl;

    // Reverse iterators
    vector<int>::reverse_iterator rend = v.rend(); // Reverse end points to the memory before the first element.
    vector<int>::reverse_iterator rbegin = v.rbegin(); // Reverse begin points to the last element.

    // Print elements using reverse iterators
    for (auto it = rbegin; it != rend; ++it) {
        cout << *(it) << " "; // Access elements in reverse
    }
    cout << endl;

    // Access the whole vector - can be done using loops or iterators.
    // Using iterators
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    // Using range-based for loop
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Deleting an element from the vector
    v.erase(v.begin());  // Deletes the first element

    if (v.size() > 2) {
        v.erase(v.begin(), v.end() - 2);   // Deletes multiple elements from a range
    }

    // Inserting an element at a particular position
    v.insert(v.begin(), 20);  // Insert 20 at the beginning
    v.insert(v.begin() + 1, 3, 25); // Insert 3 copies of 25 starting at position 1

    vector<int> newv(2, 25);
    v.insert(v.begin() + 1, newv.begin(), newv.end()); // Insert elements of newv into v at position 1

    cout << "Size of vector: " << v.size() << endl;

    // Other operations
    v.pop_back(); // Remove the last element
    v.swap(newv);  // Swap contents of two vectors
    v.clear();  // Clear all elements
    cout << "Is vector empty? " << (v.empty() ? "Yes" : "No") << endl;
}
int main(){
    vectors();
}
>>>>>>> 3b92370 (file changes)
