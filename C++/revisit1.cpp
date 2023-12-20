// #include<iostream>
// using namespace std;
// int prime(int number);
// int main(){
//     int a,b;
//     cout<<"Enter the first number :";
//     cin>>a;
//     cout<<"Enter the second number :";
//     cin>>b;
//     for(int i=a;i<=b;i++){
//         if(prime(i)==0){
//             cout<<"PRIME "<<i<<endl;
//         }
//     }
//     return 0;
// }
// int prime(int number){
//     int count=0;
//     for(int j=2;j<number;j++){
//         if(number%j==0){
//             count++;
//         }        
//     }
//     return count;
// }
#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int number);
int main(){
    int a,b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<"PRIME "<<i<<endl;
        }
    }
    return 0;
}
bool isPrime(int number){
    int count=0;
    for(int j=2;j<=sqrt(number);j++){
        if(number%j==0){
            return false;
        }
    }
    return true;
}