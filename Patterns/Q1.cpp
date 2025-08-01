#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int arr1[] = {0,1,2,3,4};

    // int a;
    // cout << "first index: ";
    // cin >> a;

    // int b;
    // cout << "second index: ";
    // cin >> b;
    
    // int res;

    //arr[0] = arr1[0];
    for(int i=1; i<=5; i++){
        arr[i] = arr[i-1] + arr1[i]; 
    }
    for(int i=0; i<5; i++){
        cout << arr[i] << " "; 
    }
    // for(int i=0; i<5; i++){
    //     res = arr[b] - arr[a-1];
    // }
    // cout << res;
}