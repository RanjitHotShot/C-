#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[50];
    int size;
    cout<<"Enter the size of the array ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the ["<<i+1<<"] element : ";
        cin>>a[i];
    }
    int sum;
    for(int i=0;i<size;i++){
        sum=0;
        for(int j=i;j<size;j++){
            sum+=a[j];
            cout<<sum<<" ";
        }
        cout<<endl;
        // cout<<"Sum : "<<sum<<endl;
    }
    return 0;
}