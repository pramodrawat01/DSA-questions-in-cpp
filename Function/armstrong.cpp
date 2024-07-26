// check weather number is armstrong or not
#include <iostream> 
#include <math.h>
using namespace std;

int countDigit(int n){
    int count=0;
    while(n)
    {
        count++;
        n/=10;
    }
    return count ;
}
bool armstrong(int num, int digit)
{
    int n=num, ans=0,rem;
    while(n){
        rem = num%10;
        // int pow=1;
        // for(int i=1;i<=digit;++i){
        //     pow *= rem;
        // }
        //ans=ans+pow;
        ans = ans+pow(rem, digit);
        n/=10;
    }
    if(ans==num){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    int num;
    cout << "enter number : ";
    cin >> num;

    //count digit 
    int digit = countDigit(num);
    cout << digit << endl;
    //armstrong number
    cout << armstrong(num, digit) << endl;
}