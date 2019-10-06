#include <iostream>
using namespace std;
int config=0;
bool isSafe(int board[][10],int i,int j,int n){
    //check column
    for(int row=0;row<i;row++){
        if(board[row][j]==1)
            return false;
    }
    int x=i;
    int y=j;
    //check right diagonal
    while(x>=0 && y<n){
        if(board[x][y]==1)
            return false;
        x--;
        y++;
    }
    x=i;
    y=j;
    //check left diagonal
    while(x>=0 && y>=0){
        if(board[x][y]==1)
            return false;
        x--;
        y--;
    }

    //if false not returned then return true
    return true;
}
bool solveNQueen(int board[][10],int i,int n){
    //base
    if(i==n){
        //print board
        config++;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]){
                    cout<<"Q ";
                }
                else
                    cout<<"_ ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }
    //recursive
    for(int j=0;j<n;j++){
        if(isSafe(board,i,j,n)){
            board[i][j]=1;
            bool canPlace=solveNQueen(board,i+1,n);
            if(canPlace)
                return true;
            board[i][j]=0;
        }
    }
    return false;
}
int main() {
   int n;
   cin>>n;
   int board[10][10]={0};
   bool ans=solveNQueen(board,0,n);
   cout<<"No. of configs: "<<config<<endl;
   return 0;
}
