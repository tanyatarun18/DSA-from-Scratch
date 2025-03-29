#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//Print 1 to n lineraly using recursion.
int n;
void print(int a){
    if(a == n+1){
        return;
    }
    cout << a << " ";
    a++;
    print(a);
}

int main(){
    cin >> n;
    print(1);
}