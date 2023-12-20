#include<iostream>
using namespace std;
int fact(int number,int fa);
int main(){
    int r;
    cout<<"Enter the  number of rows :";
    cin>>r;
    for(int i=0;i<r;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i,1)/(fact(i-j,1)*fact(j,1))<<" ";
        }
        cout<<endl;
    }

    return 0;
}
int fact(int number,int fa){
    if(number==0){
        return fa;
    }
    fact(number-1,fa*number);
}