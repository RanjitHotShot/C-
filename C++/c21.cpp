#include<iostream>
using namespace std;
int reverse(int n){
    int sum=0;
    while(n>0){
        int r=n%10;
        sum=sum*10+r;    
        n/=10;
    }
    return sum;
}
int sumBinary(int a,int b){
    int sum=0;
    int previouscarry=0;
    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            sum=sum*10+previouscarry;
            previouscarry=0;
        }
        else if(a%2==0 && b%2==1 || a%2==1 && b%2==0){
            if(previouscarry==1){
                sum=sum*10+0;
                previouscarry=1;
            }
            else{
                sum=sum*10+1;
                previouscarry=0;
            }
        }
        else{//1 and 1
            sum=sum*10+previouscarry;
            previouscarry=1;
        }
        a/=10;
        b/=10;
    }
    while(a>0){
        if(previouscarry==1){
            if(a%2==0)
            {
                sum=sum*10+0;
                previouscarry=1;
            }
            else{
                sum=sum*10+1;
                previouscarry=0;
            }
        }
        else{
            sum=sum*10+(a%2);
        }
        a/=10;
    }
    while(b>0){
        if(previouscarry==1){
            if(b%2==0)
            {
                sum=sum*10+0;
                previouscarry=1;
            }
            else{
                sum=sum*10+1;
                previouscarry=0;
            }
        }
        else{
            sum=sum*10+(b%2);
        }
        b/=10;
    }
    if(previouscarry==1){
        sum=sum*10+1;
    }
    sum=reverse(sum);
    return sum;
}
int main(){
    int a,b;
    cout<<"Enter the first binary number : ";
    cin>>a;
    cout<<"Enter the second binary number : ";
    cin>>b;

    cout<<"The sum is : "<<sumBinary(a,b)<<endl;

    return 0;
}