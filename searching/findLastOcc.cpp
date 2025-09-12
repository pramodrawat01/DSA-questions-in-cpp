#include<iostream>
using namespace std;

int findMissElement(int arr[], int size, int target){
    int start = 0; 
    int end = size -1; 
    int mid = start + (end-start)/2;


    int lastIndex = 0;

    while (start <= end)
    {
        int element = arr[mid];

        if(target == element){
            lastIndex = mid;
            start = mid+1;
        }
        if(target < element){
            end = mid-1;
        }
        if(target > element){
            start = mid+1;
        }

        mid = start + (end-start)/2;

    }
    
    return lastIndex;

}

int main(){

    int arr[] = {2,2,5,6,6,6,9,9};
    int size = 8;
    int target = 6;

    int printMissEle = findMissElement(arr, size, target);
    cout << "the last index of " << target << " is : "  << printMissEle << endl;

    return 0;
}