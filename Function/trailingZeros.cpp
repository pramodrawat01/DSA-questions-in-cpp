// trailing zeros in a factorial
#include<iostream>
using namespace std;

int trailingZeros(int N)
{
    int count =0;
    while(N>=5){
        count+=N/5;
        N/=5;
    }
    return count;
}
int main(){
    int num;
    cout << "Enter a number";
    cin >> num;

    cout << trailingZeros(num);
    return 0;
}