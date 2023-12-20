#include<iostream>
using namespace std;
void input(int *array,int size);
void display(int *array,int size);
void number_of_zeros(int *array,int size);
int main(){
    int arr[50],a;
    cout<<"Enter the size of the array : ";
    cin>> a;
    input(arr,a);
    display(arr,a);
    number_of_zeros(arr,a);
    return 0;
}
void input(int *array,int size){
    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<" Element ";
        cin>>*(array+i);
    }
}
void display(int *array,int size){
    for(int i=0;i<size;i++){
        cout<<*(array+i)<<"\t";
    }
}
void number_of_zeros(int *array,int size){
    int count =0;
    for(int i=0;i<size;i++){
        if(*(array+i)==0){
            count++;
        }
    }
    cout<<"\nNumber of zeros is  : "<<count<<endl;
}