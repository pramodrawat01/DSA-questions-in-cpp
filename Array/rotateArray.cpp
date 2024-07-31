// Rotate an array by 1
#include<iostream>
using namespace std;

void rotateArray(int arr[], int n){
    int temp=arr[n-1];
    for(int i=n-1; i>0;i--){
       arr[i]=arr[i-1];
    }
    arr[0]=temp;

    for(int i=0;i<n; i++){
        cout << arr[i] << " ";
    }

}
int main(){

    int arr[8]={2,4,3,6,14,20,18,7};
    int n=8;
    rotateArray(arr,n);

    return 0;
}