#include<iostream>
#include<vector>
using namespace std;
int pivot(vector<int>& arr, int start, int end){
    int pivot = arr[start];

    int i=start;
    int j=end;
    while(i < j){
        while(arr[i] <= pivot && i <= end){
            i++;
        }
        while(arr[j] > pivot && j >= start){
            j--;
        }
        if(i < j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[start], arr[j]);
    return j;
}
void quick_sort(vector<int>& arr, int start, int end){
    if(start < end){
        int partition = pivot(arr,start, end);
        quick_sort(arr, start, partition-1);
        quick_sort(arr, partition+1, end);   
    }
}
int main(){
    vector<int> arr = {21, 34, 1, 76, 42, 9};
    int start = 0;
    int end = arr.size()-1;
    quick_sort(arr, start, end);
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
}

//     while(arr[i] < arr[pivot] && i <= end){
    //         i++;
    //     }
    //     while(arr[j] > arr[pivot] && j >= start){
    //         j--;
    //     }
    //     if(i < j){
    //         swap(arr[i], arr[j]);
    //     }