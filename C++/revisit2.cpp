#include<iostream>
using namespace std;
int fibo(int rang);
int main(){
    int rang;
    cout<<"Enter the range : ";
    cin>>rang;
    fibo(rang);
    return 0;
}
int fibo(int rang){
    int t1=0;
    int t2=1;
    for(int i=0;i<rang;i++){
        int t3=t1+t2;
        cout<<t1<<" ";
        t1=t2;
        t2=t3;
    }
}