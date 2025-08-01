#include <iostream>
using namespace std;

//FIND THE OCCURENCE OF CHARACTERS IN STRING

int main() {
    string s = "asdfghjnvbcdsewtunodgerqcnaoshfaaaairytqd";
    int arr[256] = {0};
    for(int i=0; i<s.size(); i++){
        arr[s[i]] += 1;
    }

    int q = 6;
    while(q--){
        char query;
        cout << "Enter the query: ";
        cin >> query;

        cout <<"The no. of times the character occurs is: "<< arr[query] <<endl;
    }
    // We just used ascii values here so there are 256 characters and their 256 ascii values so we created 256 sized array and
    // the occurences stored in the respective ascii value of the characters like for 'a', the occurrences are stored in 97 and fetched.
    
}