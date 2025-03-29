#include <bits/stdc++.h>
using namespace std;

//Parameterised recursion uses parameters to calculate the result in functions.
//Print summ of first n numbers.
void sum1(int n, int sum){
    if (n == 0){
        cout << sum;
    }
    sum1(n-1,sum+n);
}

int main(){
    sum1(5,0);
}