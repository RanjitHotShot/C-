#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    char op;
    cout<<"Enter the mathematical operation sign ";
    cin>>op;
    cout<<"Enter first number : ";
    cin>>n1;
    cout<<"Enter second number : ";
    cin>>n2;
    switch (op)
    {
    case '+':
        cout<<"OUTPUT : ";
        cout<<n1+n2;
        break;
    case '-':
        cout<<"OUTPUT : ";
        cout<<n1-n2;
        break;
    case '*':
        cout<<"OUTPUT : ";
        cout<<n1*n2;
        break;
    case '/':
        cout<<"OUTPUT : ";
        cout<<n1/n2;
    default:
        cout<<"INVALID INPUT";
        break;
    }
    return 0;
}