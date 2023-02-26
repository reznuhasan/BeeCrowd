#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<10000){
        for(int i=1;i<=n;i++){
            int num;
            cin>>num;
            if(num==0){
                cout<<"NULL";
            }else{
                if(num%2==0){
                    cout<<"EVEN ";
                }else{
                    cout<<"ODD ";
                }
                if(num>0){
                    cout<<"POSITIVE";
                }else{
                    cout<<"NEGATIVE";
                }
            }
            cout<<endl;
        }
    }
}

