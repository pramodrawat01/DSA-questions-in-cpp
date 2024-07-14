// While Loop
#include<iostream>
using namespace std;

int main(){

    // Q. factor on any number
    // int number;
    // cout << "enter any number : ";
    // cin >> number;

    // int i=1;
    // while(i<=number){
    //     if(number%i==0){
    //         cout << i << endl;
    //     }
    //     i++;
    // } 
    
    //switch statement
    int dayNumber; 
    cout << "enter number, which day you wants to print : ";
    cin >> dayNumber;

    switch (dayNumber)
    {
    case 1:
        cout << "monday" << endl;
        break;
    case 2:
        cout << "turesday" << endl;
        break;
    case 3:
        cout << "wednesday" << endl;
        break;
    case 4:
        cout << "thursday" << endl;
        break;
    case 5:
        cout << "friday" << endl;
        break;
    case 6:
        cout << "saturday" << endl;
        break;
    case 7:
        cout << "sunday" << endl;
        break;
    
    default:
        cout << "enter input in integer" << endl;
        break;
    }

    return 0;
}