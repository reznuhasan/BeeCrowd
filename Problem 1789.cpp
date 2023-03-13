#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        bool x=false;
        int max=0;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            if(num>max){
                max=num;
            }
        }
       if(max<10){
        cout<<1<<endl;
       }else if(max>=10 && max<20){
         cout<<2<<endl;
       }else if(max>=20){
           cout<<3<<endl;
       }
    }
}
