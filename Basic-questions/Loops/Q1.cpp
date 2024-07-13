// 1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number to print all even numbers between 1 to number : ";
    cin >> number;

    int i=2;
    while(i<=number){
        // cout << i << " ";
        // i+=2;

        //alternate way

        if(i%2==0)
            cout << i << " ";
        i++;
    }
    return 0;
}