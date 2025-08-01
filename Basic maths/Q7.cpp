#include<iostream>
using namespace std;

//You are given an integer n. You need to check if the number is prime or not. Return true if it is a prime number, otherwise return false.

void checkPrime(int n){
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt == 0){
        cout << n << " is a prime number.";
    }else{
        cout << n << " is not a prime number.";
    }
}

int main(){
    int n = 1;
    checkPrime(n);
}