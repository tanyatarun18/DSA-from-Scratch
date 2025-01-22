#include <bits/stdc++.h>
using namespace std;

//Print sum of first N numbers using recursion
int sum = 0;
void sum1(int n){
    if (n == 0){
        cout << sum;
    }

    sum += n;
    sum1(n-1);

}

int main(){
    int n;
    cin >> n;
    sum1(n);
}
//Here we are telling that when we reach the base case, then print the sum. so, we are first adding sum(0) with 5(n), then calling the 
//function again then adding sum(5) with 4(n), and again repeating the same thing until n becomes zero. 
//We are using backtracking to retrieve the value of n. 