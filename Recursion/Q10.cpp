#include <iostream>
using namespace std;

//GCD (Greatest Common Divisor) or HCF(Highest Common Factor)
int calcGCD(int n, int m, int gcd, int i){
    if(i > min(n,m)){
        return gcd;
    }
    if(n%i==0 && m%i==0){
        gcd = i;
    }
    calcGCD(n,m,gcd,i+1);
}
int main(){
    int n = 5;
    int m = 10;
    cout << calcGCD(n,m,1,1);
}