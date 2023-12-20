#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" element";
        cin>>a[i];
    }
    int s;
    cout<<"Enter the sum :";
    cin>>s;
    int i=0,j=0,sum=0,startindex=-1,endindex=-1;
    while(j<n && sum+a[j]<=s){
        sum+=a[j];
        j++;
    }
    if(sum==s){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while(j<n){
        sum+=a[j];
        while(sum>s){
            sum-=a[i];
            i++;
        }
        if(sum==s){
            startindex=i+1;
            endindex=j+1;
            break;
        }
        j++;
    }
    cout<<startindex<<" "<<endindex<<endl;
    return 0;
}