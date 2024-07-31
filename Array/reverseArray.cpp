// reverse an array 
#include <iostream>
using namespace std;

void reversearr(int arr[],int size){
    int firstindex=0;
    int lastindex=size-1;

    while(firstindex<lastindex){
        swap(arr[firstindex],arr[lastindex]);
        firstindex++;
        lastindex--;
    }

    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }

}

int main(){

    int arr[5]={2,4,6,8,10};
    cout << "array" << endl;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    reversearr(arr, size);

    return 0;
}