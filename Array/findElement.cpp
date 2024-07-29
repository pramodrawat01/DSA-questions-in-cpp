#include<iostream>
using namespace std;

int findElement(int myArray[], int size,int num){

    for(int i=0; i<size; i++){
        if(myArray[i] == num){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    int num,size;
    cout << "enter a number to find it an array ";
    cin >> num;

    int myArray[5]={2,55,6,90,3};
    size = sizeof(myArray)/sizeof(myArray[0]);

    cout <<"num is present at "<< findElement(myArray, size,  num)<<" index" << endl;
    return 0;
}