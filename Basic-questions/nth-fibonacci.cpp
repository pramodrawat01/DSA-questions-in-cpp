//display nth position element of fibonacci series 

#include<iostream>
using namespace std;

int main(){
    int number, nextTerm=0, termOne=0, termTwo=1;
    cout << "enter the nth position in fibonacci series you want to print : " ;
    cin >> number;

    for(int i=3; i<=number; i++){
        nextTerm=termOne + termTwo;
        termOne=termTwo;
        termTwo=nextTerm;

        if(i==number){
            cout << nextTerm << endl;
        }
    }

    return 0;

}