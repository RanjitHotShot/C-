#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows : ";
    cin>>m;
    cout<<"Enter the number of columns : ";
    cin>>n;

    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the ["<<i+1<<"]["<<j+1<<"] elements : ";
            cin>>a[i][j];
        }
    }

    cout<<"The entered matrix is : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //Spiral order printing .
    int row_start=0,row_end=m-1,column_start=0,column_end=n-1;
    while(row_start<=row_end && column_start<=column_end){
        for(int col=column_start;col<=column_end;col++){
            cout<<a[row_start][col]<<" ";
        }
        row_start++;
        //for column end
        for(int row=row_start;row<=row_end;row++){
            cout<<a[row][column_end]<<" ";
        }
        column_end--;
        //for row_end
        for(int col=column_end;col>=column_start;col--){
            cout<<a[row_end][col]<<" ";
        }
        row_end--;
        //for column_start
        for(int row=row_end;row>=row_start;row--){
            cout<<a[row][column_start]<<" ";
        }
        column_start++;
    }

    return 0;
}