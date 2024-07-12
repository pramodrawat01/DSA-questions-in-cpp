// Q. print character is vowel or consonant
#include<iostream>
using namespace std;

int main(){
    //Logical operator( &&(and), ||(or), !(not) )
    char character;
    cout << "Enter any character" << endl;
    cin >> character;
    if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u'){
        cout << "Entered character is vowel" << endl;
    }
    else {
        cout << "Entered character is consonant " << endl;
    }

    //Bitwise operator ( &(and), |(or), ^(exor), ~(compliment), <<(left shift), >>(right shift))
    int num = 2&3;  //convert both numbers into bits and then use 'and' operator
    cout << "bitwise operator : " << num << endl;



    return 0;
}