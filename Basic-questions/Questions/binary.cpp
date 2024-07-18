// convert binary numbers to decimal and decimal numbers to binary
#include<iostream>
using namespace std;
int main()
{
    // int num;
    // cout << "Enter the number : ";
    // cin >> num;
    // int rem, ans = 0, mul=1;

    // while(num>0){
    //     //reminder
    //     rem = num%2;
    //     //quotient
    //     num = num/2;
    //     // answer
    //     ans = rem*mul+ans;
    //     //mul
    //     mul = mul*10;
    // }
    // cout << ans << endl;


    //using for loop
    // int num=13, result=0, j=1, rem;
    // for(int i=1; num>0; i++){
    //     // result=rem*j + result
    //     rem=num%2; //using bitwise operator - (rem = num & 1);
    //     result=rem*j+result;
    //     j*=10;
    //     num/=2; //using bitwise operator - (num = num >> 1);

    // }
    // cout << result<< endl;




    //decimal to binary**
    int num=1101;
    int rem, ans=0, mul=1;

    while(num>0){
        rem=num%10;
        num /= 10;
        ans=rem*mul+ans;
        mul*=2;
    }
    cout << ans << endl;

    
    return 0;
}