// factorial of any number
#include<iostream>
using namespace std;
int main(){
    int number, fact=1;
    cout << "enter any number : ";
    cin >> number;

    for(int i=1; i <= number; i++ ){
        fact *= i;
    } 
    cout << "factorial of " << number << "is : " << fact << endl;
    return 0;
}