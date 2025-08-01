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

// So insertion sort m hm ek loop to chlate h 0 - n tk normal sa. second loop me hm check krte ki j age choota h j-1 se to hm j ko j-1 se 
//swap kr dete h fir hm j-- daale h taki age wo uske pechhe wle se bhi chota h toh firse swap ho jye. basically tbtk swap ho jbtk apne peeche 
//wle se chhota h and ase krte krte sbse choota apne position p pohonchte jata h. 