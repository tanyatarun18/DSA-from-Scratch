#include <iostream>
using namespace std;

// Print 1 to N using recursion.
void prints(int n, int x){

    if(x > n){
        return;
    }
    cout << x << endl;
    prints(n,x+1);
}
// So, basically in recursion, the value is printed and then the function is called so while it returns at the base condition, the 
// function calls are executed but the print statement has already worked so it just prints accordinngly.


// Print 1 to N using backtracking.
void prints1(int n){
    if(n==0){
        return;
    }
    prints1(n-1);
    cout << n << endl;
}
// While in backtracking, the function gets called until the base condition but the print statement does not get executed but
// when it returns then the function calls are executed and then the print statement works so it prints from the end.

int main(){
    prints(5,1);
    prints1(5);
}