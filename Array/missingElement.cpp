#include<iostream>
using namespace std;

int missingNum(int arr[], int N){
    //sum of elements
    int elementSum=0;
    for(int i=0;i<N-1;i++){
        elementSum+=arr[i];
    }
    //sum of numbers from 2 to N
    int missingNumber = N*(N+1)/2;
    return missingNumber - elementSum;
}
int main(){
    int N =7;
    int arr[6]={1,3,4,5,6,7};
    cout << missingNum(arr, N);
    return 0;
}