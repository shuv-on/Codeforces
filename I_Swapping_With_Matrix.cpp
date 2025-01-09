#include<bits/stdc++.h>
using namespace std;
const int N=1000;
int mat[N][N];
int n;
void swap_rows(int row1,int row2,int sz){
    for(int column=1; column<=sz;column++){
        swap(mat[row1][column],mat[row2][column]);
    }
}
void swap_column(int column1,int column2,int sz){
    for(int row=1;row<=sz;row++){
        swap(mat[row][column1],mat[row][column2]);
    }
}
int main(){
    
    int  x, y; cin >> n >> x >>y;
    
    for(int i=1;i<=n;i++ ){
        for(int j=1;j<=n;j++){
            cin >> mat[i][j];
        }
    }
    swap_rows(x,y,n);
    swap_column(x,y,n);
    for(int i=1;i<=n;i++ ){
        for(int j=1;j<=n;j++){
            cout << mat[i][j]<< ' ';
        }
        cout<<'\n';
    }
}