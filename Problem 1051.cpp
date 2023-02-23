#include<bits/stdc++.h>
using namespace std;

int main()
{
    float num;
    cin>>num;
    float res=num;
    float per=0;
    if(num>=0)
    {
        res=res-2000;
    }
    if(num>2000)
    {
        if(res>1000)
        {
            per=per+((1000/100)*8);
            res=res-1000;
        }
        else
        {
            per=(res/100)*8;
        }
    }
    if(num>3000)
    {
        if(res>1000)
        {
            per=per+((1500/100)*18);
            res=res-1500;
        }
        else
        {
            per=per+(res/100)*18;
        }
    }
    if(num>4500)
    {
        per=per+(res/100)*28;
    }
    if(per==0){
        cout<<"Isento"<<endl;
    }else{
        cout<<"R$ "<<fixed<<setprecision(2)<<per<<endl;
    }
}
