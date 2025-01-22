#include <iostream>
using namespace std;

//Print the factorial of N.
int fact1(int n){ 
    if(n==0){
        return 1;
    }
    return n * fact1(n-1);

} 

int main(){

    cout << fact1(6);
}