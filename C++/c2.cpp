#include<iostream>
using namespace std;
int sumremainder(int a);
int main(){
    cout<<"Enter the number :";
    int a;
    cin>>a;
    cout<<"The number entered is :"<< a <<endl;
    cout<<sumremainder(a)<<endl;

    return 0;
}
int sumremainder(int a){
    int sum=0;
    for(;a!=0;a/=10){
        int r=a%10;
        sum+=r;
    }
    return sum;
}