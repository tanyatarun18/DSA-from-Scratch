#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=0; i< n ; i++){
        int j = i;
        while(j > 0 && arr[j]< arr[j-1]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j]  = temp;

            j--;
        }
    }
}
int main(){
    int arr[] = {21, 34, 1, 76, 42, 9};
    int n = 6;
    insertionSort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}