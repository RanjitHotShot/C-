#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[50];
    int mx=0,index;
    int size;
    cout<<"Enter the size of the array ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the ["<<i+1<<"] element : ";
        cin>>a[i];
    }
    for(int i=0;i<size;i++){
        mx=max(mx,a[i]);
        cout<< mx<< endl;
    }
    // cout<<"Enter the index : "<<endl;
    // cin>>index;
    // for(int i=0;i<size;i++){
    //     mx=a[i];
    //     for(int j=0;j<a[index];j++){
    //         if(mx<a[j]){
    //             mx=a[j];
    //         cout<<a[j]<<" ";
    //         }
    //     }
    //     cout<<"MAX : "<<mx<<endl;
    // }
    return 0;
}