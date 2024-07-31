// find second mamimum element from an given array
#include<iostream>
#include<climits>
using namespace std;

int secondLargest(int arr[], int size){
    //largest element
    int largest= INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    //second largest element
    int secondLarge = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]!=largest){
            secondLarge=max(secondLarge , arr[i]);
        }
    }

    return secondLarge;
}

int main(){

    int arr[5]={2,3,12,11,9};
    int size= sizeof(arr)/sizeof(arr[0]);

    cout << secondLargest(arr, size);

    return 0;
}
