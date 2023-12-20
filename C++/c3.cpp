#include<iostream>
int main(){
    int row;
    std::cout<<"Enter the number of rows : ";
    std::cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<i;j++){
            std::cout<<"# ";
        }
        for(int j=row;j>i;j--){
            std::cout<<"* ";
        }
        for(int j=0;j<i;j++){
            std::cout<<"$ ";        
        }
        for(int j=row;j>i;j--){
            std::cout<<"% ";
        }
        std::cout<<"\n";
    }
    return 0;
}