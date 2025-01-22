#include <iostream>
using namespace std;

//Check if the given string is palindrome or not. 
//Palindrome means that the string when reversed reads the same.
bool palindrome(int i, string st){
    if(i >= st.size()/2) return true;
    if(st[i]!= st[st.size()-i-1]) return false;
    return palindrome(i+1,st);

}
int main(){
    string st = "mada";
    cout << palindrome(0,st);
    
}