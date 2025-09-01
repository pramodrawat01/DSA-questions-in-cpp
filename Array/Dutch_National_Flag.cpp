#include<iostream>
#include<vector>
using namespace std;


int main(){

    int arr[] = {0,1,0,1,1,0,1,0,1,1,0,0,1,1,0};
    int size = 15;
    int start = 0;
    int end = size-1;

    int i =0;

    while (i != end)        
    {
        if(arr[i] == 0){
            swap(arr[start], arr[i]);
            i++;
            start++;
        }
        else{
            swap(arr[end],arr[i]);
            end--;
        }
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << ", ";
    }
    
    

    return 0;
}