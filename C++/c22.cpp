#include<bits/stdc++.h>
using namespace std;
void input(int arr[],int size);
void diaplay(int arr[],int size);
// int search(int arr[],int size,int key);
int binarySearch(int arr[],int size,int key);
int main(){
    int size,arr[50];
    cout<<"Enter the size of the array : ";
    cin>>size;
    input(arr,size);
    diaplay(arr,size);

    cout<<"Enter the key to be searched : ";
    int key;
    cin>>key;
    // int a=search(arr,size,key);
    // if(a==-1){
    //     cout<<"NOT FOUND"<<endl;
    // }
    // else{
    //     cout<<"FOUND at "<<a+1<<endl;
    // }
    if(binarySearch(arr,size,key)==-1){
        cout<<"NOT FOUND"<<endl;
    }
    else{
        cout<<"FOUND at "<<binarySearch(arr,size,key)+1<<endl;
    }
    return 0;
}
void input(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"Enter the ["<<i+1<<"] element : ";
        cin>>arr[i];
    }
}
void diaplay(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// int search(int arr[],int size,int key){
//     int flag=0,pos=0;
//     for(int i=0;i<size;i++){
//         if(key==arr[i]){
//            return i;
//         }
//     }
//     return -1;
// }
int binarySearch(int arr[],int size,int key){
    int first=0;
    int last=size-1;
    while(first<=last){
        int middle=(first+last)/2;
        if(arr[middle]==key){
            return middle;
        }
        else if(key>arr[middle]){
            first=middle+1;
        }
        else{
            last=middle-1;
        }
    }
    return -1;
}