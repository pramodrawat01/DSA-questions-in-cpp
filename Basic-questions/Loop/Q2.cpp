// Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number n : ";
    cin >> n;

    //using for loop
    // for(int i=1; i<=n; i++){
    //     if(i%3==0 || i%5==0){
    //         continue;
    //     }
    //     cout << i << endl;
    // }

    //using while loop
    int i=1;    
    while(i<=n){
        if(i%3==0 || i%5==0){
            i++;
            continue; //continue statement skip the rest of the current iteration and move to the next iteration ofthe loop
        }
        cout << i << ", ";
        i++;
    }
    return 0;
}
// GPT answer using function
// #include <iostream>

// void printNonDivisibleBy3And5(int n) {
//     int i = 1;
//     while (i <= n) {
//         if (i % 3 == 0 || i % 5 == 0) {
//             ++i;
//             continue;
//         }
//         std::cout << i << std::endl;
//         ++i;
//     }
// }

// int main() {
//     int n = 20; // You can change this value to test with other numbers
//     printNonDivisibleBy3And5(n);
//     return 0;
// }
