// find sum of natural numbers entered by user
#include<iostream>
using namespace std;

int main(){
    int number,sum=0;
    cout << "enter number : " ;
    cin >> number;

    for(int i=1; i<=number; i++){
        sum += i;
    }
    cout << "Sum of "<< number <<"natural numbers : " << sum << endl;
    return 0;
}