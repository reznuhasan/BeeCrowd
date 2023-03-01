#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int total=0;
    int rab=0;
    int rat=0;
    int frog=0;
    for(int i=0; i<t; i++)
    {
        int n;
        char c;
        cin>>n>>c;
        if(n>=1 && n<=15)
        {
            if(c=='C')
            {
                total+=n;
                rab+=n;
            }
            else if(c=='R')
            {
                total+=n;
                rat+=n;
            }
            else if(c=='S')
            {
                total+=n;
                frog+=n;
            }
        }
    }
    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<rab<<endl;
    cout<<"Total de ratos: "<<rat<<endl;
    cout<<"Total de sapos: "<<frog<<endl;
    float rabPer=(100.0/total)*(float)rab;
    float ratPer=(100.0/total)*(float)rat;
    float frogPer=(100.0/total)*(float)frog;
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<rabPer<<" %"<<endl;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<ratPer<<" %"<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<frogPer<<" %"<<endl;


}
