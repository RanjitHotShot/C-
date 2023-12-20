#include<bits/stdc++.h>
using namespace std;
int hexadecimalToDecimal(string n);
int main(){
    string n;
    cout<<"Enter the number :";    
    cin>>n;
    cout<<hexadecimalToDecimal(n)<<endl;
    return 0;
}
int hexadecimalToDecimal(string n){
    int s=n.size();
    int ans=0;
    int x=1;
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans+=x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans+=x*(n[i]-'A'+10);
        }
        x*=16;
    }

    return ans;
}