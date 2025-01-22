#include <iostream>
using namespace std;

//Reverse an array using recursion
void reverse(int arr[], int a, int b){
    if(a >= b){
        return;
    }
    swap(arr[a],arr[b]);
    reverse(arr,a+1,b-1);
}
int main(){
    int arr[] = {1,4,2,6,4,6};
    int a = 0;
    int n = sizeof(arr)/ sizeof(arr[0]);
    int b = n-1;
    reverse(arr,a,b);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}
