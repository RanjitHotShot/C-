#include<bits/stdc++.h>
using namespace std;
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
    for(int i=1;i<size;i++)
    {
        int j=i-1;
        int current=a[i];
        while(a[j]>current && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
    cout<<"The array after sorting is : "<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    return 0;   
}