#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0; i<= n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap (arr[j], arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[] = {21, 34, 1, 76, 42, 9};
    int n = 6;
    bubbleSort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

// So bubble sort me hmlog pehle loop chlate h jo 1 - n-1 tk chlta h fir dusra loop j check krta h j or j+1 me agar j bda h j+1 se to wo
// swap hojta h aur ase krte krte 1 i ka 0 - n-1 me greatest element apne jagah p chle jata aur fir process chlta rhta h. 
// hm j ko n-i-1 tk isiliye chlate h taaaki jb greatest element apne jagah p pohonchte jye tb next comparisons me hm usko include na kre.
//Aur srf < likhte h na ki <= n-i-1 bcz j ko uske alge wle compare krana h n to last wle j k liye j+ out of bound ho jyega isiliye last 
//element to uske pichhle lw se already compare ho rha hota h n to wo sort hojta h. 
