#include<iostream>
using namespace std;

// Write a program that accepts a list of integers and calculates the sum of the integers using recursion.
int calcSum(int arr[], int n, int a, int sum){
    if(a >= n){
        return sum;
    }
    sum = sum + arr[a];
    calcSum(arr,n,a+1,sum);

}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout << calcSum(arr,n,0,0);

}