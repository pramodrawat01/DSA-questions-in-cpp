//fibonacci sequence is in which each number is the sum of two preceding ones.
#include<iostream>
using namespace std;
int main(){
    int number, privious=0, current=1, next=0;
    cout << "enter how many fibonacci elements you wants : ";
    cin >> number;

    for(int i=1; i<=number; i++){
        if(i==1){
            cout << privious << ", ";
            continue;
        }
        if(i==2){
            cout << current << ", ";
            continue;
        }
        next = privious + current;
        privious = current;
        current = next;
        
        cout << next << ", ";
    }

    return 0;

}