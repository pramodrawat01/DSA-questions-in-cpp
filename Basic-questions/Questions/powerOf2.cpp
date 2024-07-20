// if the entered number is power of 2 than return 1 otherwise 0

#include<iostream>
using namespace std;
int main(){

    int num;
    cout << "Enter any number to check weather it comes in power of 2 or not : ";
    cin >> num;

    if(num<0){
        cout << "0";
        return 0;
    }
    while(num>1)
    {
        if(num%2==0){
            num /= 2;
        }
        else{
            cout << "0" << endl;
            return 0;
        }
    }
    cout << "1" << endl;

    return 0;
}