#include<iostream>
using namespace std;

int findSqrt(int n){
    int low = 1, high = n, ans = 0;
    while (low <= high)
    {
        long long mid = (low + high)/2;
        long long val = (mid * mid);

        // if (n/2)^2  is less then n, so the ans could be (n/2) or will be greater then (n/2)
        // so i'll ignore the left part 
        if( val <= n){
            low = mid+1;
            ans = mid;
        }
        else{
            high = mid-1;
        }
    }

    return ans;
    
}

int main(){


    int n = 39;
    cout << "the sqrt of " << n << " is  : " << findSqrt(n) << endl;
    cout << "the time complexity will be O(log n) ad space complexity will be O(1)" << endl;

    return 0;

}