#include<bits/stdc++.h>
using namespace std;

int main(){
    double num;
    cin>>num;
    int value=num*100;
    cout<<"NOTAS:"<<endl;
    cout<<(value/10000)<<" nota(s) de R$ 100.00"<<endl;
    value=value%10000;
    cout<<(value/5000)<<" nota(s) de R$ 50.00"<<endl;
    value%=5000;
    cout<<(value/2000)<<" nota(s) de R$ 20.00"<<endl;
    value%=2000;
    cout<<(value/1000)<<" nota(s) de R$ 10.00"<<endl;
    value%=1000;
    cout<<(value/500)<<" nota(s) de R$ 5.00"<<endl;
    value%=500;
    cout<<(value/200)<<" nota(s) de R$ 2.00"<<endl;
    value%=200;
    cout<<"MOEDAS:"<<endl;
    cout<<(value/100)<<" moeda(s) de R$ 1.00"<<endl;
    value%=100;
    cout<<(value/50)<<" moeda(s) de R$ 0.50"<<endl;
    value%=50;
    cout<<(value/25)<<" moeda(s) de R$ 0.25"<<endl;
    value%=25;
    cout<<(value/10)<<" moeda(s) de R$ 0.10"<<endl;
    value%=10;
    cout<<(value/5)<<" moeda(s) de R$ 0.05"<<endl;
    value%=5;
    cout<<(value/1)<<" moeda(s) de R$ 0.01"<<endl;
    value%=1;



}


