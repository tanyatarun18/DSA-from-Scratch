#include <iostream>
using namespace std;

//Print N to 1 using recursion
void prints(int n){
    if(n==0){
        return;
    }
    cout << n << endl;
    prints(n-1);
}

// Print N to 1 using backtracking
void prints1(int n, int a){
    if(a > n){
        return;
    }

    prints1(n, a+1);
    cout << a << endl;
}
int main(){
    prints(5);
    prints1(5,1);
}