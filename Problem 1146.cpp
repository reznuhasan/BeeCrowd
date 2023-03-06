#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int x;
        cin>>x;
        if(x==0){
            break;
        }else{
            int i=1;
            for(i;i<x;i++){
                cout<<i<<" ";
            }
            cout<<i<<endl;
        }
    }
}
