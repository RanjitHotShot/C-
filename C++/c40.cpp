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
    //SECOND MATRIX
    int p,q;
    cout<<"Enter the number of rows : ";
    cin>>p;
    cout<<"Enter the number of columns : ";
    cin>>q;

    int b[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<"Enter the ["<<i+1<<"]["<<j+1<<"] elements : ";
            cin>>b[i][j];
        }
    }

    cout<<"The entered matrix is : "<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    int c[m][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            c[i][j]=0;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    
    
    cout<<"The product of matrix is : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}