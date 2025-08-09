#include <iostream>
#include <vector>
using namespace std;

// Merge sort follows divide and rule.
//So, in this method we divide the array until it comes to the point where it has a single element. 
// For ex - [1,3,2,4,2,1], in this array we will divide this equally(for odd it can be in any way like for 5 elements, it can be 4 & 5 
// or 5 & 4 but we havr to make sure whichever way we follow it should followed throughout.). so the array array will be divided -
// [1,3,2] & [4,2,1]. since array has more than 1 element so we will again divide the first array - [1] & [3,2] and now first array
// has 1 element so we'll leave it & go to second array and divide it further - [3] [2]. so this also comes to single elements.
// So, after completely dividing the first part we'll merge it in sorted way like [2,3] then [1,2,3], so first part of array is 
// sorted. So now we'll forllow thw samw thing with the second part and it then looks like [1,2,4].
// Now we'll use 2 pointers and put 1 pointer to 1 part and 2nd pointer to other part and then compare from both which one will be
// smaller, we'll put that in the array and move the pointer ahead and compare and then merge and then we'll get the sorted array.

void merge(vector<int>& arr, int start, int mid, int end){
    vector<int> arr1;
    int left = start;
    int right = mid+1;
    while(left <= mid && right <= end){
        if(arr[left] <= arr[right]){
            arr1.push_back(arr[left]);
            left++;
        }else{
            arr1.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        arr1.push_back(arr[left]);
        left++;
    }
    while(right <= end){
        arr1.push_back(arr[right]);
        right++;
    }
    for(int i=start; i<=end; i++){
        arr[i] = arr1[i-start];
    }
}
void mergeSort(vector<int>& arr, int start, int end){
    
    int mid = (start + end) / 2;
    if(start >= end){
        return;
    }
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
    
}
int main(){
    vector<int> arr = {3,2,5,2,1,5,4};
    int n = arr.size();
    int start = 0;
    int end = n-1;
    mergeSort(arr, start, end);
    
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}