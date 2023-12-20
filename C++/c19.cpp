#include<iostream>
using namespace std;
int pythogorousTriplet(int a,int b,int c);
int main(){
    int a,b,c;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Enter the value of c : ";
    cin>>c;
    int g=pythogorousTriplet(a,b,c);
    g== 1 ? cout<<"PYTHAGOROUSTRIPLET":cout<<"NOT";
    return 0;
}
int pythogorousTriplet(int a,int b,int c){
    if((a*a+b*b)==(c*c)){
        return true;
    }
    else if((c*c+b*b)==(a*a)){
        return true;
    }
    else if((a*a+c*c)==(b*b)){
        return true;
    }
    else{
        return false;
    }
}