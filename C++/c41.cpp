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
    bool found=false;
    int target;
    cout<<"Enter the element to be searched :";
    cin>>target;
    int r=0,c=n-1;
    while(r<n && c>=0){
        if(a[r][c]==target){
            found=true;
        }
        if(a[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"ELement found ";
    }
    else{
        cout<<"Not found";
    }
    
    return 0;
}