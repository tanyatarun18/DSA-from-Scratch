#include <iostream>
using namespace std;

//You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.
//An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.

void checkarmstrong(int n){
    int x = n;
    int cnt = 0;
    int a = 0;
    while(n > 0){
        a = n%10;
        cnt++;
        n = n/10;
    }
}
int main(){
    int n;
    checkarmstrong(n);
}