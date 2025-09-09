#include<iostream>
using namespace std;

int findElement(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;

    while (start <= end ){
        int element = arr[mid];
        if(element == target){
            return mid;
        }
        else if(target < element){
            end = mid-1;
        }
        else {
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }
    
}

int main(){

    // binary search
    int arr[] = {2,3,5,7,9,10,12};
    int size =7;
    int target = 12;

    int searchElement = findElement(arr, size, target);
    cout << " element found at  : "  << searchElement <<  " index" << endl;


    return 0;

}