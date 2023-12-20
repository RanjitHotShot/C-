#include<iostream>
using namespace std;
void sorting(int a[],int n);
bool pairsum(int a[],int n,int k);
int main(){
    int a[50];
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" element";
        cin>>a[i];
    }
    sorting(a,n);
    int k;
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
void sorting(int a[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int current=a[i];
        while(a[j]>current && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
}
bool pairsum(int a[],int n,int k){
    int i=0;
    int j=n-1;
    while(i<=j){
        int last=a[j];
        int first=a[i];
        if(first+last==k){
            cout<<i+1<<" "<<j+1<<endl;
            return true;
        }
        else if (first+last<k){//increase low value
            i++;
        }
        else{//reduce high value
            j--;
        }
    }
    return false;
}