#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int s;
    cout<<"Enter the size of the array : ";
    cin>>s;
    vector<int> a(s);
    for(int i=0;i<s;i++){
        cout<<"Enter the "<<i+1<<" element :";
        cin>>a[i];   
    }

    const int N=1e6+2;
    vector<int> idx(N, -1);
    int minindex=INT_MAX;
    for(int i=0;i<s;i++){
        if(idx[a[i]]!=-1){
            minindex=min(minindex,idx[a[i]]);
        }
        else{
            idx[a[i]]=i;
        }
    }
    if(minindex==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minindex+1<<endl;
    }
    return 0;
}
