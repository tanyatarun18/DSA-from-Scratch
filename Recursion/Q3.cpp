#include <iostream>
using namespace std;

// Print sum of n numbers using recursion
void prints(int n,int a){
    if(n == 0){
        cout << a ;
    }

    a+=n;
    prints(n-1,a);
}

int main(){
    prints(5,0);
}