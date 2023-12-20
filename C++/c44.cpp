#include<iostream>
void swap(int *num1,int *num2);
int main(){
    int a,b;
    std::cout<<"Enter the first number : ";
    std::cin>>a;
    std::cout<<"Enter the seconde number : ";
    std::cin>>b;
    swap(&a,&b);
    std::cout<<"The first number is : "<<a<<std::endl;
    std::cout<<"The second number is : "<<b<<std::endl;

    return 0;
}
void swap(int *num1,int *num2){
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}