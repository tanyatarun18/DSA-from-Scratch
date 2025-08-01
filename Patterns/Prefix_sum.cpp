#include <iostream>
using namespace std;

void prefixSum(int arr[], int n, int p[]){
    p[0] = arr[0];
    for(int i=1; i<n; i++){
        p[i] = p[i-1] + arr[i];
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int p[n];
    prefixSum(arr,n,p);
    for(int i=0; i<n; i++){
        cout << p[i] << ",";
    }
}

// We have initialized p[0] separately because while in loop it will try to access p[-1] for p[i-1] which is not valid. And since p[0] is
//already initialized, we start the loop from p[1] rather than p[0].


