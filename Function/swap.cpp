// swap two numbers using function 
// "pass by value" and "pass by reference" concept -
// pass by value - it create a copy of arguments in memory location while
// pass by reference - it refers to the same memory address

#include <iostream>
using namespace std;

//void swap(int a, int b)         //a and b did not swap becaue parameters are pass by value
void swap(int &a, int &b)           // pass by reference
{
    int c;
    c = a;
    a = b;
    b = c;
}
int main()
{
    int a,b;
    cout << "enter a and b ";
    cin >> a >> b;
    swap(a,b);
    cout << "a : " << a << endl << "b : " << b << endl;

}


// increment variable 'a' :-
// void incr(int n){            // pass by value (do not increse value of 'a')
//     n++;
//     cout << n;
// }
// void incr(int &n){           // pass by referance 
//     n++;
//     cout << n;
// }
// int main(){
//     int a = 10;
//     incr(a);
//     cout << endl;
//     cout << a;
// }