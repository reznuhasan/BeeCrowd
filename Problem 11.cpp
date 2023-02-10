#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    float c;
    cin>>a>>b>>c;
    int x,y;
    float z;
    cin>>x>>y>>z;
    float price1=(b*c);
    float price2=y*z;
    float total=price1+price2;
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<total<<endl;


}
