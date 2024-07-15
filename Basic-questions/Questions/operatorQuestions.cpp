#include<iostream>
using namespace std;
int main(){

    //Q.1: Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO. 
    int temp;
    cout << "Enter the temperature of your current location in Fahrenheit : ";
    cin >> temp;

    if(temp < 90 && temp > 70){
        cout << "Yes, Weather is good for swimming!" << endl;
    }
    else{
        cout << "No, Temperature is not suitable for swimming." << endl;
    }


    
    //Q.2: Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.
    int number;
    cout << "Enter a number to check weather it is Even and Positive or not : ";
    cin >> number;
    if(number>=0 && number%2==0){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }



    // Q.3: Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).
    int age;
    cout << "Enter you age : " ;
    cin >> age;
    if(age>=13 && age<=19){
        cout << "teenager" << endl;
    }
    else{
        cout << "not a teenager" << endl;
    }



    //Q.4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.
    int a,b,c;
    cout << "enter three numbers respectively to compare : ";
    cin >> a >> b >> c;
    if(a>b || a>c){
        if(a>b){
            cout << "yes a is greater than b " << endl;
        }else{
            cout << "yes a is greater than c " << endl;
        }
    }
    else{
        cout << "no, a is not greater than either" << endl;
    }


    return 0;
}