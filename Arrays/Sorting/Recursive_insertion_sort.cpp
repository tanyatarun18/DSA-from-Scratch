#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    if(n <= 1){
        return;
    }
    for(int i=1; i<n; i++){  
        if(arr[i] < arr[i-1]){             // If we replace '<' with '>', this whole code will sort in descending order then.
            swap(arr[i], arr[i-1]);
            i--;
        }
    }
    insertionSort(arr, n-1);
}

int main(){
    int arr[] = {21, 34, 1, 76, 42, 9};
    int n = 6;
    insertionSort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}