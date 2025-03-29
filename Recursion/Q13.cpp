#include <iostream>
using namespace std;

//GCD (Greatest Common Divisor) or HCF(Highest Common Factor)
int factors(int n, int m){
    int gcd = 1;
    for(int i = 1; i<=min(m,n); i++){
        if(n%i == 0 && m%i == 0){
            gcd = i;
        }
    }
    return gcd;
}

int main(){
    int n;
    cout << "Enter first number: ";
    cin >> n;
    int m;
    cout << "Enter second number: ";
    cin >> m;
    cout << factors(n,m);
}