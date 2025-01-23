// Write a program that accepts a list of integers and calculates the sum of the integers using different approaches to illustrate the growth of functions. Specifically, implement the following:

// Naive Approach: Use a simple loop to calculate the sum of the list.
// Recursive Approach: Write a recursive function to calculate the sum of the list.
// Using Built-in Functions: Use built-in sum() function to calculate the sum.

#include <iostream>
#include <list>
#include <numeric>
using namespace std;

//Naive Approach
int sum1(){
    list<int> m;
    int n , value;
    cin >> n;
    int sum = 0;

    for(int i=0; i<n;i++){
        cin>>value;
        sum +=value;
    }
    cout << sum;

}

//Recursive Approach
int sum2(int arr[], int size){
    
    if(size == 0){
        return 0;
    }

    return arr[0] + sum2(arr+1,size-1);
}

//Built-in function

int sum3(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = accumulate(arr, arr + size, 0);

    cout << sum << endl;

    return 0;
}


int main(){
    sum1();
    int arr[] = {1,2,3,4,5};
    cout << sum2(arr,5);
    sum3();
}