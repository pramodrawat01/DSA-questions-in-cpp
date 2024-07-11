//Logical Operator 
// Q. print character is vowel or consonant
#include<iostream>
using namespace std;

int main(){
    char character;
    cout << "Enter any character" << endl;
    cin >> character;
    if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u'){
        cout << "Entered character is vowel" << endl;
    }
    else {
        cout << "Entered character is consonant " << endl;
    }
    cout << !0 << endl;
    return 0;
}