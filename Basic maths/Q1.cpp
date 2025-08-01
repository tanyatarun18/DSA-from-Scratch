#include <iostream>
using namespace std;
// You are given an integer n. You need to return the number of digits in the number. The number will have no leading zeroes, except when the number is 0 itself.

void Countdigits(int n){
    int cnt = 0;
    int a;
    while (n > 0){
        a = n%10;
        cnt++;
        n = n/10;
    }
cout << cnt;
}
int main(){
    int n = 23;
    Countdigits(n);
}