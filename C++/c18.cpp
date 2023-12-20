#include<iostream>
using namespace std;
int sum(int n);
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    cout<<"The sum of first n natural numbers is : "<<sum(n)<<endl;

    return 0;
}
int sum(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    return sum;
}