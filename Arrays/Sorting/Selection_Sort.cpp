#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i; j <= n-1; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

int main(){
    int arr[] = {21, 34, 1, 76, 42, 9};
    int n = 6;
    selectionSort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

// so selection me basically hm first element ko min consider krte h by using the lopp of i. Fir uske baad hm dusra loop chlate h j ka jo 
// i se start hota h and compare krta h ki agar koi element hmare considered minimum se chhota h toh min ka pointer uss j p shift ho jata h
// jo chhota ho and then min aur i ko swap kr dete h hm jisse choota front m aa jata h and then ye process continue hote jata h. 

