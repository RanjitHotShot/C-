// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a[50],s,flag1,flag2;
//     cout<<"Enter the size of the array : ";
//     cin>>s;
//     for(int i=0;i<s;i++){
//         cout<<"Enter the "<<i+1<<" element :";
//         cin>>a[i];   
//     }
//     if(a[0]>a[1]){
//         cout<<"Record Breaking day : 0 "<<a[0]<<endl;
//     }
//     if(a[s-1]>a[s-2]){
//         cout<<"Record Breaking day : s "<<a[s-1]<<endl;
//     }
//     int mx=a[0];
//     for(int i=1;i<s;i++){
//         if(a[i]>mx){
//             mx=a[i];
//             if(mx>a[i+1]){
//                 cout<<"RECORD break : "<<mx<<endl;
//             }
//         }
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";    
    cin>>n;
    int a[n+1];
    a[n]=-1;
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" element :";
        cin>>a[i];   
    }

     if(n==1){
        cout<<"0"<<endl;
        return 0;
    }
    int ans=0;
    int mx=-1;
    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx=max(mx,a[i]);
    }
    cout <<ans<<endl;
    return 0;
}