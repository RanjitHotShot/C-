/*TIME COMPLEXITY O(n^2)*/
#include<iostream>
using namespace std;
bool pairsum(int arr[],int s,int k);
int main(){
    int a[50];
    int n,k;
    cout<<"Enter the size of the array :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" element";
        cin>>a[i];
    }
    cout<<"Enter the sum : ";
    cin>>k;
    if(pairsum(a,n,k)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
bool pairsum(int arr[],int s,int k){
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++)
        if(arr[i]+arr[j]==k){
            cout<<i+1<<" "<<j+1<<endl;
            return true;
        }
    }
}