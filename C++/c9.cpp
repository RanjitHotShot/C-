#include<iostream>
int main(){
    int count;
    for(int i=2;i<=100;i++){
        count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        count==2 ? std::cout<<i<<" PRIME\t" : std::cout<<i<<" NOT PRIME\n";
        // if(count==2){
        //     std::cout<<"PRIME"<<i<<"\n";
        // }
    }
}