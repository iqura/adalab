#include<iostream>
#include<vector>
using namespace std;

int n;

void dfs(int vertex,int isVisited[], int n, int *a){
    isVisited[vertex]=1;
    cout<<vertex<<" ";
    for(int i=0;i<n;i++){
        if(a[vertex*n+i]==1 && isVisited[i]==0){
            dfs(i, isVisited, n, a);
        }
    }
}

int main(int argc, char const *argv[])
{
    cout<<"enter the no of vertices";
    cin>>n;
    int isVisited[n];
    int a[n][n]; 
    cout<<"enter the vertices as matrix:";	
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        isVisited[i]=0;
    }
    for(int i=0;i<n;i++){
        if(isVisited[i]==0){
            dfs(i, isVisited, n, (int *)a);
            cout<<"\n";
        }
    }
    return 0;
}
