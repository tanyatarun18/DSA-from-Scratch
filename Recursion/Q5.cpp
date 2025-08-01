#include <iostream>
using namespace std;

//Reverse an array using recursion
void reverses(int arr[], int m, int n){
    if(m>=n){
        return;
    }
    swap(arr[m],arr[n]);
    reverses(arr,m+1,n-1);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int m=0;
    int n = (sizeof(arr)/ sizeof(arr[0]))-1;
    reverses(arr,m,n);
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }

}