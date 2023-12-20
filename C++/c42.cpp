#include<bits/stdc++.h>
using namespace std;
char palindrome(char arr[]);
int main(){
    char arr[100];
    cout<<"Enter the word  : ";
    cin>>arr;
    if(palindrome(arr)){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }

    return 0;
}
char palindrome(char arr[]){
    int s=strlen(arr);
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]!=arr[s-1-i]){
            return false;
        }
    }
    return true;
}