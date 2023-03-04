#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        double x;
        while(1)
        {
            double n;
            cin>>n;
            if(n>=0 && n<=10)
            {
                x=n;
                break;
            }
            else
            {
                cout<<"nota invalida"<<endl;
            }
        }
        double y;
        while(1)
        {
            double n;
            cin>>n;
            if(n>=0 && n<=10)
            {
                y=n;
                break;
            }
            else
            {
                cout<<"nota invalida"<<endl;
            }
        }
        double avg=(x+y)/2;
        cout<<"media = "<<fixed<<setprecision(2)<<avg<<endl;
        int flag=0;
        while(1)
        {
            int n;

            cin>>n;
            cout<<"novo calculo (1-sim 2-nao)"<<endl;;
            if(n==2)
            {
                flag=1;
                break;
            }
            else if(n==1)
            {
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
}
