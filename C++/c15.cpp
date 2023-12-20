#include<iostream>
using namespace std;
void fact(int number,int f);
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    fact(num,1); 

    return 0;
}
void fact(int number,int f){
    if(number==0){
        cout<<"Factorial is : "<<f<<endl;
        return;
    }
    return fact(number-1,f*number);
}