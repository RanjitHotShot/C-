#include<iostream>
using namespace std;
int main(){
    int input,a[50];
    cout<<"Enter the number of inputs : ";
    cin>>input;
    for(int i=0;i<input;i++){
        cout<<"Enter the "<<i+1<<" number : ";
        cin>>a[i];
        if(a[i]%2==0)
        cout<<"EVEN"<<endl;
        else
        cout<<"ODD"<<endl;
    }
    return 0;
}