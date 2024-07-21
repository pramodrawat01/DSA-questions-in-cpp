//complement of a number
#include<iostream>
using namespace std;
int main(){

    int num;
    cout << "Enter a number to print its complement : ";
    cin >> num;
    if(num==0){
        cout << "1" << endl;
        return 0;
    }

    int ans=0, rem, i=1;
    while (num>0)
    {
        rem=num%2;
        rem^=1;                     //this binary operator(exor ^) will convert 0 into 1 and 1 into 0
        //ans = ans*10 +rem;        //this line will print the complement as it is
        ans=rem*i+ans;              //these 2 line of code will convert that binary complement into decimal
        i*=2;                       //*
        num/=2;
    }
    cout << ans << endl;
    

    return 0;
}