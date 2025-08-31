#include<iostream>
#include<set>
using namespace std;

int findPair(int userInput, int arr[], int size){

    // initializing pair
    set<pair<int, int>>pair_set;


    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] + arr[j] == userInput){
                pair_set.insert({arr[i], arr[j]});
                //cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }

    // not duplicates pairs 
    for(auto p : pair_set){
        cout << endl << "printing pair_set now : " << endl;
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }
}

int main(){
    
    int userInput;
    int arr[] = {2,4,2,5,3,6,3,6};
    int size = 8;
    cout << "Enter input to find all pairs in given array : ";
    cin >> userInput;


    findPair(userInput, arr, size);

    return 0;
}