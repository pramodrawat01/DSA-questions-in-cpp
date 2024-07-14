#include<iostream>
using namespace std;

int main(){
    //prime number or not
    int number;
    cout << "enter a rendom number : ";
    cin >> number;
    if(number<2)
        cout << "not a prime number" << endl;
    else{
        for(int i=2; i<number; i++){
            if(number % i == 0){
                cout << "Not a prime number" << endl;
                return 0;
            }
        }
        cout << "Prime number" << endl;
        return 0;
    }
}