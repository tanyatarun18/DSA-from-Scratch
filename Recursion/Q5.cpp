#include <iostream>
using namespace std;

//Print N to 1 recursively using backtrackng.
void print(int n, int a){
    if(a > n){
        return;
    }
    print(n,a+1);
    cout << a << " ";
}

int main(){
    print(5,1);
}