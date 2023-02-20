#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    float s=(a+b+c)/2;
    float value=sqrt((pow(a,2)-(pow(b,2))/4))*b;
    float area=0.5*value;
    cout<<area<<endl;

}
