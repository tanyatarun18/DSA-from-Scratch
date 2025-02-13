#include <iostream>
using namespace std;

//Check if a given number is prime or not.

bool primeN(int n){
    int count = 0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            count=count+1;
        }
    }
    if(count == 2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if(primeN(n)){
        cout << n << " is a prime number";
    }
    else{
        cout << n << " is not a prime number";
    }
}