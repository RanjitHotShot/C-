#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    // cin>>a>>b>>c;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"Enter the third number : ";
    cin>>c;
    if(a>b){
        if(a>c)
        cout<<"First number is greatest : "<<a<<endl;
        else
        cout<<"Third number is the greatest : "<<c<<endl;
    }
    else if(b>a){
        if(b>c)
        cout<<"Second number is the greatest : "<<b<<endl;
        else
        cout<<"Third number is greatest : "<<c<<endl;
    }
    return 0;
}