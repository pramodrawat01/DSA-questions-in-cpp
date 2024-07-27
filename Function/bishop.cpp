// total moves for bishop??
#include <iostream>
using namespace std;

int totalMovesForBishop(int a, int b)
{
    int totalMoves=0;

    //towards right-bottom direction
    totalMoves += min(8-a,8-b);
   
    //towards left-bottom direction
    totalMoves += min(8-a,b-1);

    //towards top-left direction
    totalMoves += min(a-1,b-1);
    
    //towards top-right direction
    totalMoves += min(a-1,8-b);
    
    return totalMoves;
}
int main(){
    int A, B;
    cout <<"Etner position of bishop as row and column : ";
    cin >> A >> B;

    cout << totalMovesForBishop(A,B);
}