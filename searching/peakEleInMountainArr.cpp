#include<iostream>
using namespace std;
#include<vector>

int peakElement(vector<int>&arr){
    int n = arr.size();

    if(n == 1 || arr[0] > arr[1]) 
        return 0;
    if(arr[n-1] > arr[n-2])
        return n-1;
    
    int low = 1, high = n-2; 

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            return mid;
        }
        
        if(arr[mid] < arr[mid +1]){
            low = mid+1;
        }
        else{
            high = mid+1;
        }
    }

    return 0;
    
    
}

int main(){

    vector<int> arr = {2,4,10,17,5,4};

    cout << "peak element exist at " << peakElement(arr) << " index" << endl;


    return 0;
}