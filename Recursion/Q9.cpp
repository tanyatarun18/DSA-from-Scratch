#include <iostream>
using namespace std;

//Check if a given number is prime or not.
bool checkPrime(int n, int i, int cnt){
    cout<<i<<endl;
    if(i>n){
        if(cnt == 2){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(n%i == 0){
        cnt++;
        cout<<"number is "<<i<<" "<<cnt<<endl;
    }
    checkPrime(n,i+1,cnt);
}
int main(){
    int n;
    cout << "Enter the number";
    cin >> n;
    cout<<checkPrime(n,1,0);
}