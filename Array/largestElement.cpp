// find a largest element from an array
#include <iostream>
using namespace std;

int largestElement(int myArray[8],int size){
    int largest=myArray[0];
    for(int i=0; i<size; i++){
        if(myArray[i] > largest){
            largest=myArray[i];
        }
    }
    return largest;
}

int main(){

    int myArray[8]={100,4,3,5,12,21,18,29};
    int size = sizeof(myArray)/sizeof(myArray[0]);
    cout << " the largest element is : " <<  largestElement(myArray,size);
    return 0;
}