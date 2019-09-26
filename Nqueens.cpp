#define N 4 
#include <stdbool.h> 
#include <stdio.h> 
  
void print(int board[N][N]) 
{ 
printf("OUTPUT:\n");
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) 
            printf(" %d ", board[i][j]); 
        printf("\n"); 
    } 
} 
  
bool isSafe(int board[N][N], int row, int col) 
{ 
    int i, j; 
  
    for (i = 0; i < col; i++) 
        if (board[row][i]) 
            return false; 
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) 
        if (board[i][j]) 
            return false; 
    for (i = row, j = col; j >= 0 && i < N; i++, j--) 
        if (board[i][j]) 
            return false; 
  
    return true; 
} 

bool solvenqutil(int board[N][N], int col) 
{ 

    if (col >= N) 
        return true; 
  
    for (int i = 0; i < N; i++) { 
        if (isSafe(board, i, col)) { 

            board[i][col] = 1; 
  
            if (solvenqutil(board, col + 1)) 
                return true; 
  
            board[i][col] = 0;  
        } 
    } 
  
    return false; 
} 
  
bool solveNQ() 
{ 
  int board[N][N],i,j,n;
  printf("enter the size");
  scanf("%d",&n);
  printf("enter the board\n");
  for(i=0;i<n;i++)
	  for(j=0;j<n;j++)
		  scanf("%d",&board[i][j]);
  if (solvenqutil(board, 0) == false) { 
	printf("OUTPUT:\t");
        printf("Solution does not exist\n"); 
        return false; 
    } 
  
    print(board); 
    return true; 
} 

int main() 
{ 
    solveNQ(); 
    return 0; 
} 
