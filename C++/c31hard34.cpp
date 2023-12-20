#include<iostream>
#include<climits>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    int currentsum[n+1];
    currentsum[0]=0;
    for(int i=1;i<=n;i++){
        currentsum[i]=currentsum[i-1]+arr[i-1];
    }
    int maxSum=INT_MIN;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=currentsum[i]-currentsum[j];
            maxSum=std::max(sum,maxSum);
        }
    }
    std::cout<<maxSum<<std::endl;
    return 0;
}