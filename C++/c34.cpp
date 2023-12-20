/*Brute force method*/
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int maxsum=INT_MIN;
    int a[]={-1,4,7,2};
    for(int i=0;i<4;i++){
        for(int j=i;j<4;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                cout<<a[k]<<" ";
                sum+=a[k];
            }
            maxsum=max(sum,maxsum);
            //cout<<endl;
        }
    }
    cout<<"MAX SUM = "<<maxsum<<endl;
    return 0;
}