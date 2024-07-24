#include<iostream>
using namespace std;
//function to check weather number is prime or not
bool prime(int n)
{
    if(n<2){
        return 0;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
        return 1;
    }
}

//function to print factorial of given number
int fact(int n){
    int ans = 1; 
    for(int i=1;i<=n; i++){
        ans *= i;
    }
    return ans;
}

int main()
{
    int a,b;
    cout << "enter value of a and b : ";
    cin >> a >> b;

    cout << "a - " << prime(a) << endl;
    cout << "b - " << prime(b) << endl;
    cout << "b-a - " << prime(b-a) << endl;

    int p;
    cout << "enter value of p to check its factorial : ";
    cin>> p;
    int fact_ans;
    fact_ans = fact(p);
    cout << fact_ans << endl;

}