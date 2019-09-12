#include<iostream>
#define N 4
#define SQN 3
#define UNASSIGNED 0
using namespace std;

bool FindUnassignedLocation(int grid[N][N],int &row,int &col)
{
    for(row=0;row<N;row++)
        for(col=0;col<N;col++)
            if(grid[row][col]==UNASSIGNED)
                return true;
    return false;
}

bool UsedInRow(int grid[N][N],int row,int num)
{
    for(int col=0;col<N;col++)
        if(grid[row][col]==num)
            return true;
    return false;
}

bool UsedInColumn(int grid[N][N],int col,int num)
{
    for(int row=0;row<N;row++)
        if(grid[row][col]==num)
            return true;
    return false;
}

bool UsedInBox(int grid[N][N],int boxStartRow,int boxStartCol,int num)
{
    for(int row=boxStartRow;row<boxStartRow+3;row++)
        for(int col=boxStartCol;col<boxStartCol+3;col++)
            if(grid[row][col]==num)
                return true;
    return false;
}

bool isSafe(int grid[N][N],int row,int col,int num)
{
    return !UsedInRow(grid,row,num) && !UsedInColumn(grid,col,num) && !UsedInBox(grid,row-row%SQN,col-col%SQN,num);
}

bool SolveSudoku(int grid[N][N])
{
    int row,col;
    if(!FindUnassignedLocation(grid,row,col))
        return true;
    for(int num=1;num<=N;num++)
    {
        if(isSafe(grid,row,col,num))
        {
            grid[row][col]=num;
            if(SolveSudoku(grid))
                return true;
            grid[row][col]=UNASSIGNED;
        }
    }
    return false;
}

int main()
{
    int grid[N][N];
    cout<<"Enter the partially filled sudoku:"<<endl;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            cin>>grid[i][j];
    bool result=SolveSudoku(grid);
    cout<<"Output: "<<endl;
    if(result)
    {
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
                cout<<grid[i][j]<<" ";
            cout<<endl;
        }

    }
    else
        cout<<"No solution exists";
    return 0;
}
