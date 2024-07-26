
// reverse integer   

#include<iostream>
#include<limits.h>
using namespace std;
int main(){

    int number;
    cout << "Enter number : ";
    cin >> number;

    int ans=0,rem;
    while(number>0){
        rem=number%10;
        number /= 10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10){   // to avoid integer overflow 
            cout << "0" << endl;
            return 0;
        }
        ans = ans*10 + rem;
    }
    cout << ans << endl;

    return 0;
}