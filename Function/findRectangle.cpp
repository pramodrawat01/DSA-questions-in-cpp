// can it form a rectangle from given four sides
#include<iostream>
using namespace std;
bool findRectangle(int a, int b, int c, int d)
{
    if((a==b && c==d) || (a==c && b==d) || (a==d && b==c))
    return true;
    else
    return false;
    
}
int main(){
    int a, b, c, d;
    cout << "Enter four values of sides to check weather it is rectangle or not : ";
    cin >> a>> b>> c>> d;

    cout << findRectangle(a,b,c,d);
    
}