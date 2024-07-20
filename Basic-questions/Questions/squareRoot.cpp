// check the square root of entered number
#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter any number to check square root : ";
    cin >> num;

    int i=1; 
    while(i<num){
        if(i*i==num || i*i>num){
            cout << i << endl;
            return 0;
        }
        i++;
    }
    
    return 0;
}