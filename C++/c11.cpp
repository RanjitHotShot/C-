#include<iostream>
using namespace std;
void pat1(int n,int m);
void pat2(int n,int m);
void pat3(int n);
void pat4(int n);
void butterfly(int n);
void pat5(int n);
void pat6(int n,int m);
int main(){
    int row,column;
    cout<<"Enter the number of rows : ";
    cin>>row;
    cout<<"Enter the number of columns : ";
    cin>>column;
    pat1(row,column);
    pat2(row,column);
    pat3(row);
    cout<<endl;
    pat4(row);
    cout<<endl;
    butterfly(row);
    cout<<endl;
    pat5(row);
    cout<<endl;
    pat6(row,column);
    return 0;
}
void pat1(int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<" * ";
        }
        cout<<"\n";//cout<<endl;
    }
}
void pat2(int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 || i==n-1 || j==m-1 || j==0)
            cout<<" * ";
            else
            cout<<"   ";
        }
        cout<<endl;
    }
}
void pat3(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<" * ";
        }
        cout<<endl;
    }
}
void pat4(int n){
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=n;j>i;j--){
                //cout<<"   ";
                cout<<"  ";
            }
            for(int j=0;j<=i;j++){
                //cout<<" *    ";
                if((i+j)%2==0)
                cout<<"1   ";
                else
                cout<<"0   ";
            }
            cout<<endl;
        }
    }
    for(int i=1;i<n;i++){
        if(i%2==0){
            for(int j=0;j<=i;j++){
                //cout<<" *    ";
                cout<<"  ";
            }
            for(int j=n;j>i;j--){
                //cout<<"   ";
                if((i+j)%2==0)
                cout<<"0   ";
                else
                cout<<"1   ";
            }
            cout<<endl;
        }
    }
}
void butterfly(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        for(int j=n;j>i;j--){
            cout<<"  ";
        }
        for(int j=n;j>i;j--){
            cout<<"  ";
        }
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"* ";
        }
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int j=n;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pat5(int n){
    int l=n;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"  ";
        }
        l=i;
        for(int j=0;j<i;j++){
            cout<<l--<<" ";
        }
        int k=2;
        for(int j=1;j<i;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}
void pat6(int n,int m){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(((i+j)%4==0) || (i==2 && j%4==0)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}