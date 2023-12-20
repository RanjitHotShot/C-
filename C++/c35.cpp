/*KADANES ALGORYTHM*/
#include<iostream>
#include<climits>
int main(){
    int n;
    std::cout<<"Enter the size of the array : ";
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        std::cout<<"Enter the "<<i+1<<" element";
        std::cin>>a[i];
    }
    int sum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
            sum+=a[i];
            std::cout<<sum<<std::endl;
            if(sum<0){
                sum=0;
            } 
            maxsum=std::max(sum,maxsum);
    }
    std::cout<<"The maximum sum is : "<<maxsum<<std::endl;
    return 0;
}