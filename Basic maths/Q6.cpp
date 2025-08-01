#include <iostream>
using namespace std;

//You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.
//A number which completely divides another number is called it's divisor.

void findDivisor(int n){
    int div = 0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            div = i;
            cout << div << ",";
        }
    }
}

int main(){
int n = 6;
findDivisor(n);
}