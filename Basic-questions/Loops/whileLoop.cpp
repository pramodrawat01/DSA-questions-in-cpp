// While Loop
#include<iostream>
using namespace std;

int main(){

    // Q. factor on any number
    int number;
    cout << "enter any number : ";
    cin >> number;

    int i=1;
    while(i<=number){
        if(number%i==0){
            cout << i << endl;
        }
        i++;
    } 

    return 0;
}