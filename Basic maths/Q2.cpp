#include <iostream>
using namespace std;

//You are given an integer n. Return the integer formed by placing the digits of n in reverse order.

void reversedigits(int n){
    int rev = 0;
    int a;
    while (n > 0){
        a = n%10;
        rev = rev*10 + a;
        n = n/10;
    }
cout << rev;
}
int main(){
    int n = 23;
    reversedigits(n);
}