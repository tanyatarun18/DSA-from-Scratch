#include <iostream>
using namespace std;

//print Fibonacci numbers using recursion.
//Fibonacci of a number = sum of previous two number in a series.
int fibonacci(int n){
    
    if(n <= 1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    cin >> n;
    cout << fibonacci(n);

}