#include <bits/stdc++.h>
#include <iostream>
using namespace std;

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