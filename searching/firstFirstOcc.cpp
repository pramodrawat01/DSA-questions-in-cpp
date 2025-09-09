#include<iostream>
using namespace std;

int findFirstOccIndex(int arr[], int size, int target){
    int start = 0; 
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while (start <= end)
    {
        int element = arr[mid];
        if(element == target){
            ans = mid;
            end = mid -1;
        }
        else if(target < element){
            end = mid-1;
        }
        else {
            start = mid+1;
        }

        mid = start + (end-start)/2;
    }
    return ans;
    
}

int main(){

    // find the first occurrence of an element
    int arr[] = {2,4,6,6,9,9,12,12,12,20,20,20};
    int size =12;
    int target = 9;

    int firstOccIndex = findFirstOccIndex(arr, size, target );
    cout << "first occurrence of " << target << " is at " << firstOccIndex << " index" << endl;
    return 0;
}