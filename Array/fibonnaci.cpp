// find the nth element of fibonnaci series
#include<iostream>
using namespace std;

int fibonnaci(int arr[], int n){
    for(int i=2; i<=n-1; i++){
        arr[i]= arr[i-1]+arr[i-2];
    }
    return arr[n-1];
    
}
int main(){

    int n;
    cout << "Enter the numebr n (1 <= n < 1000) : " ;
    cin >> n;
    int arr[1000];
    arr[0]=0;
    arr[1]=1;

    cout << fibonnaci(arr,n);

    return 0;
}