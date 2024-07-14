// OPERATORS IN C++

#include<iostream>
using namespace std;

int main(){
    //Logical operator( &&(and), ||(or), !(not) )
    // Q. print weather character is vowel or consonant
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
    // '&' (and operator)
    int num = 2&3;  //convert both numbers into bits and then use 'and' operator
    cout << "bitwise operator : " << num << endl;

    // '^' (Exor operator)  
    int num1 = 2^3;  // convert into bits and 0 for same operands and 1 for different.
    cout << "Exor operator : " << num1 << endl;  

    // '~' (Complement operator)
    int num2 = ~5; // convert all 1's bits into 0 and 0's bits into 1 and then find 2's complement for answer
    cout << "Complement operator : " << num2 << endl;

    // '<<' (left shift operator)
    int num3 = 5<<1; // shift every bit of 5 to one place left
    cout << "leftshift operator : " << num3 << endl;

    // '>>' (right shift operator)
    int num4 = 6>>2; // shift every bit of 6 to two place right
    cout << "rightshift operator : " << num4 << endl;


    return 0;
}