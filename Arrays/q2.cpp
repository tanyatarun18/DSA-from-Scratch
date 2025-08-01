// Find the second largest element in an array

#include <iostream>
using namespace std;

void largestElement(int arr[], int n){
    for(int i=0; i<n; i++){
        int min = i;
        for(int j=i; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
            swap(arr[i],arr[min]);
        }
    }
}

int main(){
    int arr[] = {4,6,2,6,4,2,8,5,0};
    int n = 9;
    largestElement(arr,n);
    cout << "Second Largest element in array is: "<< arr[n-1];
}

//this was my brute force approach. Lets do the optimal one.

int main(){
    int arr[] = {4,6,2,6,4,2,8,5,0};
    int n = 9;
    int largest = 0;
    int seclargest = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            seclargest = largest;
            largest = arr[i];
        }
        if(arr[i] < largest && arr[i] > seclargest){
            seclargest = arr[i];
        }
    }
    cout << "Second Largest element in array is: "<< seclargest;
}