// Check if an array is sorted or not.

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,9,5,6};
    int n = 6;
    bool ans = true;
    for(int i=0 ; i<n; i++){
        if(arr[i] > arr[i+1]){
            ans = false;
            break;
        }
    }
    if(ans){
        cout << "Array is sorted";
    }
    else{
        cout << "Array is not sorted";
    }
}