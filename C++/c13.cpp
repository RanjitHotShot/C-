#include<iostream>
using namespace std;
int prime(int i);
int main(){
    int a,b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    for(int i=a;i<=b;i++){
        if(prime(i))
        cout<<i<<endl;
    }
}
int prime(int i){
    for(int j=2;j<i;j++){
        if(i%j==0){
            return false;
        }
    }  
    return true;
}