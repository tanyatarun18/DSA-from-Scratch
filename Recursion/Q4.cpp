#include <iostream>
using namespace std;

//Print the factorial of N.
int fact(int n){
    if(n==0){
        return 1;
    }

    return n * fact(n-1);
}
int main(){
    cout << fact(5);
}