#include <iostream>
using namespace std;

//Check if the given string is palindrome or not. 
int palindromes(string s, int a, int b){
    if(a == b){
        return true;
    }
    if(s[a] != s[b]) return false;
    return palindromes(s,a+1,b-1);
    
}

int main(){
    string s = "MADAM";
    int a = 0;
    int b = s.size()-1;
    if(palindromes(s,a,b)){
        cout << s << " is palindrome.";
    }
    else{
        cout << s << " is not palindrome.";
    }
}