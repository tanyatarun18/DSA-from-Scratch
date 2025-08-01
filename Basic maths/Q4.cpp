#include <iostream>
using namespace std;

//You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.
//The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.
void findGCD(int n1, int n2){
    int gcd=1;
    for(int i=1; i<=min(n1,n2); i++){ 
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }  
    }
    cout << gcd;
}

int main(){
    int n1 = 9;
    int n2 = 8;
    findGCD(n1, n2);
}