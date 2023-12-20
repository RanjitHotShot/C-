#include<iostream>
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
    // transpose of the matrix
    for(int i=0;i<m;i++){
        for(int j=i;j<n;j++){
            if(i != j){
                int temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }
    }
    cout<<"The transposed matrix is"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}