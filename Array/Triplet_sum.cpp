#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[] = {2,5,2,5,3,6,2,6,3,6};
    int size =10 ;
    int num;
    cout << "enter a number to find triplet in array : ";
    cin >> num;


    for(int i=0; i<size; i++){
        for(int j= i+1; j < size; j++){
            for(int k=j+1; k<size; k++){
                if(arr[i] + arr[j] + arr[k] == num){
                    cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" ;
                }
            }
        }
    }

    return 0;
}