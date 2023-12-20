#include<bits/stdc++.h>
using namespace std;
int main(){
    char sentence[100];
    cin.getline(sentence,100);
    int i=0,currentlength=0,maxlength=0;
    int sindex=0,st=0;
    while(1){
        if(sentence[i]==' ' || sentence[i]=='\0'){
            if(currentlength>maxlength){
                maxlength=currentlength;
                sindex=st;
            }
            st=i+1;
            currentlength=0;
        }
        else{
            currentlength++;
        }
        if(sentence[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxlength<<endl;
    for(int i=sindex;sentence[i]!=' ';i++){//or i<maxlength;i++
        cout<<sentence[i];
    }
    return 0;
}