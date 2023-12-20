#include<iostream>
using namespace std;
int fact(int number,int fa);
int main(){
    int n,r;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of r : ";
    cin>>r;
    double C=fact(n,1)/(fact(n-r,1)*fact(r,1));
    cout<<"The nCr value is : "<<C<<endl;
    
    return 0;
}
int fact(int number,int fa){
    if(number==0){
        return fa;
    }
    fact(number-1,fa*number);
}