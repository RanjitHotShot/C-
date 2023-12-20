#include<iostream>
using namespace std;
void fib(int range);
int main(){
    int r;
    cout<<"Enter the range of the series : ";
    cin>>r;
    fib(r);

    return 0;
}
void fib(int range){
    int a=0;
    int b=1;
    int c;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<range-2;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}