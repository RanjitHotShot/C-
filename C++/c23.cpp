#include<bits/stdc++.h>
using namespace std;
void sorting(int a[],int s);
int main(){
    int size,a[40];
    cout<<"Enter the size of the array ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the ["<<i+1<<"] element : ";
        cin>>a[i];
    }
    cout <<"The elements are before sorting :"<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"The array after sorting is : "<<endl;
    sorting(a,size);
    
    return 0;
}
void sorting(int a[],int s){
    int min;
    for(int i=0;i<s;i++){
        min=i;
        for(int j=i+1;j<s;j++){
            if(a[j]<a[i]){
                min=j;
            }
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
}