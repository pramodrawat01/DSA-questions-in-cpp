// check the number is palindrome or not

#include<iostream> 
#include<limits.h>
using namespace std;
int main(){

    int x;
    cout << "Enter a number to check weather it is palindrome or not : ";
    cin >> x;
    int rem, ans=0, num=x;
    if(num<0){
        cout << "not a palindrome" << endl;
        return 0;
    }
    while(num>0){
        rem = num%10;
        if(ans>INT_MAX/10){
            cout << "Not palindrome" ;
            return 0;
        }
        ans = ans*10 + rem;
        num /= 10;

    }
    if(x==ans){
        cout << "palindrome number" << endl;
    }
    else{
        cout << "not a palindrome number" << endl;
    }

    return 0;

}