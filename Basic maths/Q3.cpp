#include <iostream>
using namespace std;

//You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.
//A palindrome number is a number which reads the same both left to right and right to left.
void checkpalindrome(int n){
    int x = n;
    int r = 0;
    int a;
    while(n > 0){
        a = n%10;
        r = r*10 + a;
        n = n/10;
    }
    if(x == r){
        cout << x << " is a palindrome" << endl;
    }else{
        cout << x << " is not a palindrome" << endl;
    }
}
int main(){
    int n = 454;
    checkpalindrome(n);
}