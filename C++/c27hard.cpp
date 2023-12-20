#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[50],s;
    cout<<"Enter the size of the array : ";
    cin>>s;
    for(int i=0;i<s;i++){
        cout<<"Enter the "<<i+1<<" element :";
        cin>>a[i];   
    }
    int ans=2;
    int current=2;
    int pd=a[1]-a[0];
    for(int j=2;j<s;j++){
        if(pd==a[j]-a[j-1]){
            current++;
        }
        else{
            pd=a[j]-a[j-1];
            current=2;
        }
        ans=max(ans,current);
    }
    cout<<"ANSWER : "<<ans<<endl;
    return 0;
}