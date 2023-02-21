#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    if(a>0 && b>0 && c>0 )
    {
        if(a+b>c && b+c>a && a+c>b)
        {
            cout<<"Perimetro = "<<fixed<<setprecision(1)<<a+b+c<<endl;
        }

        else
        {
            float basis=a+b;
            float area=((a+b)/2)*c;
            cout<<"Area = "<<fixed<<setprecision(1)<<area<<endl;
        }
    }

}
