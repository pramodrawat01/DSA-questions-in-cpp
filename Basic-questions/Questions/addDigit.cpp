// add digits ex -  (235 -> 2+3+5=10, (10 -> 1+0=1))
#include<iostream>
using namespace std;
int main(){

    int num;
    cout << "Enter number : ";
    cin >> num;

    while(num>9){
        int rem, result=0;
        for(int i=1;num>0;i++){
            rem=num%10;
            result+=rem;
            num/=10;
        }
    num=result;
    }

    cout << num << endl;

    return 0;
}