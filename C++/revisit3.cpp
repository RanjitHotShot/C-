#include<iostream>
using namespace std;
int fact(int number){
    int factorial=1;
    for(int i=1;i<=number;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n,r;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of r : ";
    cin>>r;
    int d=n-r;
    float ans=fact(n)/(fact(d)*fact(r));
    cout<<ans<<endl;
    return 0;
}