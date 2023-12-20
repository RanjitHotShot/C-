#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"Enter the number :"<<endl;
    cout<<"1 for armstrong :"<<endl;
    cout<<"2 for palindrome : "<<endl;
    cout<<"3 for perfect :"<<endl;
    int a;
    cin>>a;
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    int a1=number;
    int a2=a1;
    int sum=0,r,rr;
    int count=0;
    int rev=0;

    switch(a){
        case 1:
        if(number==153){
            while(number!=0){
                rr=number%10;
                sum+=rr*rr*rr; // Use integer multiplication instead of pow()
                number/=10;
            }
        } 
        while(a1!=0){
            r=a1%10;
            count++;
            a1/=10;
        }
        while(number!=0){
            rr=number%10;
            sum+=pow(rr,count);
            number/=10;
        }
        if(sum==a2){
            cout<<"ARMSSTONG";
        }
        else{
            cout<<"NOT ARMSTRONG";
        }
        break;
        case 2:
        while(number!=0){
            r=number%10;
            rev=rev*10+r;
            number/=10;
        }
        if(rev==a1){
            cout<<"PALINDROME";
        }
        else{
            cout<<"NOT PALINDROME";
        }
        break;
        case 3:
        for(int i=1;i<=number/2;i++){
            if(number%i==0){
                sum+=i;
            }
        }
        if(sum==a1){
            cout<<"PERFECT";
        }
        else{
            cout<<"Not PERFECT";
        }
        break;
        default : cout<<"INVALID INPUT";
    }
    return 0;
}