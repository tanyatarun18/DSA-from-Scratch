#include <bits/stdc++.h>
using namespace std;

string name = "Tanya";
void print(int a){
    if(a == 5){
        return;
    }
    
    cout << name << endl;
    a++;
    print(a);
}
int main(){
    print(0);
}