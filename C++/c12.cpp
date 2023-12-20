#include<iostream>
using namespace std;
void binary(int a,int d);
int main(){
    int number;
    cout<<"Enter the decimal number ";
    cin>>number;
    binary(number,0);

    return 0;
}
void binary(int a,int d){
    int a1=a,count=0;
    while(a1>0){
        int r=a1%2;
        count++;
        a1/=2;
    }
    int arr[100],index=0;
    while (a!=0){
        arr[index]=a%2;
        index++;
        a/=2;
    }
    for(int i=0;i<8;i++){
        cout<<"0 ";
    }
    for(int i=count-1;i>=0;i--){
        if (i>=index)
        cout<<"0 ";
        else
        cout<<arr[i]<<" ";
    }
    // if(a>1 || d<3){
    //     binary(a/2,d+1);
    // }
    // cout<<a%2<<" ";
}