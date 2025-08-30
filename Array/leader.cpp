#include <iostream>
#include <climits>
#include <vector>
using namespace std;

vector<int> findLeader(int arr[], int size){
    int max = INT_MIN;
    vector<int> leaderArr;

    for(int i = size-1; i>=0; i--){
        if(arr[i] > max){
            max = arr[i];
            leaderArr.push_back(arr[i]);
        }
    }

    return leaderArr;
}

int main(){

    int arr[] = {16, 17, 4, 3, 5,2};
    int size = 6;

    vector<int> leaderElements = findLeader(arr, size);
    cout << "leader elements : "<< endl;
    for(int num :leaderElements ){
        cout << num << ", ";
    }
    cout << endl;
    return 0;
}