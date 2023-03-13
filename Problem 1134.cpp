#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"MUITO OBRIGADO"<<endl;
    int a=0;
    int g=0;
    int d=0;
    while(1){
        int n;
        cin>>n;
        if(n==1){
            a+=1;
        }else if(n==2){
            g+=1;
        }else if(n==3){
            d+=1;
        }else if(n==4){
            break;
        }
    }
    cout<<"Alcool: "<<a<<endl;
    cout<<"Gasolina: "<<g<<endl;
    cout<<"Diesel: "<<d<<endl;
}
