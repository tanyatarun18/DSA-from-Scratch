#include <iostream>
using namespace std;

//print 1 to N recursively using backtracking.
//Backtracking means we call the function recursively until the base condition is met and then 
//when its time to return then the values are printed from backwards.
void print(int n){
if (n==0){
    return;
}
print(n-1);
cout << n << endl;

}

int main(){
    int n;
    cin >> n;
    print(n);
}