#include <bits/stdc++.h>
using namespace std;

//Functional recursion uses function to return the result. It basically calls the function to return te result.
//Print sum of first n natural numbers.
int sum1(int n){ 
    if(n==0){
        return 0;
    }
    return n + sum1(n-1);

} 

int main(){
    cout << sum1(5);
}