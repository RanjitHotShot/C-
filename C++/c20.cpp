#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
void hexa(int num);
int octal(int num);
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    cout<<"The octal equivalent of the number : "<<number<<" is "<<octal(number)<<endl;
    hexa(number);
    return 0;

}
int octal(int num){
    int sum=0,i=0;
    while(num!=0){
        int r=num%10;
        sum=sum+r*pow(8,i);
        i++;
        num/=10;
    }
    return sum;
}
//      IMPORTANT
void hexa(int num){
    char sum[50];
    int i=0;
    while(num!=0){
        int temp=0;
        temp=num%16;
        if(temp<10){
            sum[i]=temp+48;
            i++;
        }
        else{
            sum[i]=temp+55;
            i++;
        }
        num/=16;
    }
    cout << "The hexadecimal representation is: ";
    for(int j = i - 1; j >= 0; j--)
        cout << sum[j];
    cout << endl;
}