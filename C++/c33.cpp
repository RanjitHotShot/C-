#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" element";
        cin>>a[i];
    }
    const int N=1e6 + 2;
    bool check[N];
    for(int i=0;i<N;i++){
        check[i]=false;//or 0
    }
    for(int i=0;i<n;i++){
        if (a[i]>=0){
            check[a[i]]=true;//or 1
        }
    }
    int ans=-1;
    for(int i=1;i<N;i++){
        if(check[i]==false){//0
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    // bool idx[100];
    // for(int i=0;i<100;i++){
    //     idx[i]=false;
    // }
    // num=-1;
    // for(int i=0;i<100;i++){
    //     if(idx[a[i]]!=false){
    //         num=a[i];
    //     }
    //     else if (a[i]>0){
    //         idx[a[i]]=true;
    //     }
    // }
    // cout<<"The smallest missing positive number is : "<<num;
}