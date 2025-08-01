#include <iostream>
using namespace std;

//print Fibonacci numbers using recursion.
int calcFib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return calcFib(n-1) + calcFib(n-2);
}
int main(){
    cout << calcFib(5);

}
