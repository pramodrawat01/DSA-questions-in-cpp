// nim game
#include<iostream>
using namespace std;

bool canNimWin(int n) {
    if(n%4==0){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    int num;
    cout << "enter a number : ";
    cin >> num;

    cout << canNimWin(num) << endl;
}