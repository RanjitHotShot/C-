#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,pos=0;
    cout<<"Enter the size of the array : ";
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++){
        cout<<"Enter the "<<i+1<<" element :";
        cin>>a[i];   
    }
    /*TIME COMPLEXITY O(n^2)*/
    int count;
    for(int i=0;i<s;i++){
        count=0;
        for(int j=i+1;j<s;j++){
            if(a[j]==a[i]){
                count ++;
            }
        }
        if(count==1){
            pos=i;
            break;
        }
    }
    cout<<"The first repeating element is "<<a[pos]<<endl;
    return 0;
}