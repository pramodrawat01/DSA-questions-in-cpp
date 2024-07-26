// print characters in small and chapital letter

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "small letters : ";
    for(char i=97; i<=122; i++){
        cout << i << ", ";
    }
    cout << endl;
    cout << "chapital letters : ";
    for(char i=65; i<=90; i++){
        cout << i << ", ";
    }
    return 0;
}