//sum of two numbers using functions
#include<iostream>
using namespace std;

//sum function
int sum(int m, int n)           //function declaratinon
{
    int ans = m+n;              //function defination
    return ans;
}
int mul(int m, int n)
{
    int ans=m*n;
    return ans;
}

int main(){

    int a,b;
    cout << "Enter value of a and b : ";
    cin >> a >> b;
    cout << "Sum of a and b is : " << sum(a,b) << endl; // function call
    cout << "Multiply of a and b : " << mul(a,b)<< endl;

}

