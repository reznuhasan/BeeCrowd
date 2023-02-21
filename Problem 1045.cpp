#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    float v[3];
    v[0]=a;
    v[1]=b;
    v[2]=c;
    for(int i=0; i<2; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(v[i]<v[j])
            {
                int temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
    a=v[0];
    b=v[1];
    c=v[2];
    if(a>=b+c)
    {
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else
    {
        if(pow(a,2)==(pow(b,2)+pow(c,2)))
        {
            cout<<"TRIANGULO RETANGULO"<<endl;
        }
        if(pow(a,2)>(pow(b,2)+pow(c,2)))
        {
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        }
        if(pow(a,2)<(pow(b,2)+pow(c,2)))
        {
            cout<<"TRIANGULO ACUTANGULO"<<endl;
        }
        if((a==b) && (b==c))
        {
            cout<<"TRIANGULO EQUILATERO"<<endl;
        }
        if(((a==b) && (b!=c)) || ((b==c) && (a!=c)) || ((a==c) && (b!=c)))
        {
            cout<<"TRIANGULO ISOSCELES"<<endl;
        }
    }


}
