#include<iostream>
using namespace std;
int fact(int number){
    int factorial=1;
    for(int i=1;i<=number;i++){
        factorial*=i;
    }
    return factorial;
}
int nCr(int num1,int num2){

    return fact(num1)/(fact(num1-num2)*fact(num2));
}
int main(){
    int rows;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    for(int i=0;i<=rows;i++){
        for(int j=0;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}