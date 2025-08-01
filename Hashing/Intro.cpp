#include <iostream>
using namespace std;

//Hashing is prestoring and fetching.
// So, for an example - I have an array with certain elements stored in it. Now I make a query to find out how many times a certain
// element occurs in the array. Now if the array is small-sized then we can find that by running the loop the number of times the
//element occurs and update the value and this will take o(q*n) time. q is the number of elements i make query for. So, if we come
//across a very large-sized array then this brute force will take a lot of time which is not good.
//So, We use hashing. In this, we create another array of size maximum element in our previous array+1 and store 0 in all the block.
// Now we run a lopp in previous array and as the element occurs then 1 will be added to the new array of same index of which the
// element has occurred. and then we fetch the data from the new array which will be how many times an element has occurred.
// THIS IS CALLED ARRAY HASHING.

int main() {
    int arr[] = {1,2,4,2,7,5,8,4,6,0,7,5,3};
    int n = 13;
    int arr1[10] = {0};

    for(int i=0; i<n;i++){
        arr1[arr[i]] += 1;
    }

    int q = 6;
    while(q--){
        int query;
        cout << "Enter the query: ";
        cin >> query;

        cout <<"The no. of times the query occurs is: "<< arr1[query] <<endl;
    }
}