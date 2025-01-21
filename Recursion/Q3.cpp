#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//Print n to 1 using recursion

void print(int a){
    if(a == 0){
        return;
    }
    cout << a << " ";
    a--;
    print(a);

}
int main(){
    print(5);
}