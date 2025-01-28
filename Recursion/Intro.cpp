#include <iostream>
using namespace std;

//Basic Recursion program
//Here the output will be infinite as we dont have any base case here.
// void prints(){
//     cout << "Hello" << endl;
//     prints();
// }

// Recursion with the base case included
int a = 0;
void print(){
    if(a == 4){
        return;
    }
    else{
        cout << a << endl;
        a++;
    }
    print();
}

int main(){
    //prints();
    print();
}