/*For equal length binary numbers only*/
#include<bits/stdc++.h>
using namespace std;
int sumBinary(int num1,int num2);
int reverse(int ans);
int main(){
    int a,b;
    cout<<"Enter the first binary number : ";
    cin>>a;
    cout<<"Enter the second binary number : ";
    cin>>b;
    
    int anss=sumBinary(a,b);
    cout<<"The sum is : "<<reverse(anss)<<endl;
    return 0; 
}
int sumBinary(int num1,int num2){
    int ans=0;
    int previouscarry=0;
    while(num1!=0 && num2!=0){
        int r1=num1%10;
        int r2=num2%10;

        int sum=r1+r2+previouscarry;
        ans=ans*10+sum%2;
        previouscarry=sum/2;
        num1/=10;
        num2/=10;
    }
    if(previouscarry!=0){
        ans=ans*10+previouscarry;
    }
    return ans;
}
int reverse(int ans){
    int rev=0;
    while(ans!=0){
        int r=ans%10;
        rev=rev*10+r;
        ans/=10;
    }
    return rev;
}