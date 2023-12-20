/*First 3rd December 2023*/
#include<iostream>
using namespace std;
int main(){
    cout<<"Hello World\n";
    cout<<"AWESOME\n";
    int a=12;
    double b=40;
    if(a<b){
        cout<<"Bis bigger"<<endl;
    }
    else{
        cout<<"Ais bigger"<<endl;
    }
    cout<<"Size of integer is "<<sizeof(a)<<endl;
    cout<<"Size of double is "<<sizeof(b)<<endl;
    int c;
    cout<<"Enter the number"<<endl;
    cin>>c;
    int count=0;
    for(int i=1;i<=c;i++){
        if(c%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
    return 0;
}