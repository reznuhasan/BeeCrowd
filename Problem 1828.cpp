#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        string man1,man2;
        cin>>man1>>man2;
        if(man1==man2)
        {
            cout<<"Caso #"<<i<<": De novo!"<<endl;
        }
        else
        {
            if(man1=="pedra" && (man2=="lagarto" || man2=="tesoura"))
            {
                cout<<"Caso #"<<i<<": Bazinga!"<<endl;
            }
            else if(man1=="papel" && (man2=="pedra" || man2=="Spock"))
            {
                cout<<"Caso #"<<i<<": Bazinga!"<<endl;
            }
            else if(man1=="tesoura" && (man2=="papel" || man2=="lagarto"))
            {
                cout<<"Caso #"<<i<<": Bazinga!"<<endl;
            }
            else if(man1=="lagarto" && (man2=="papel" || man2=="Spock"))
            {
                cout<<"Caso #"<<i<<": Bazinga!"<<endl;
            }
            else if(man1=="Spock" && (man2=="pedra" || man2=="tesoura"))
            {
                cout<<"Caso #"<<i<<": Bazinga!"<<endl;
            }
            else
            {
                cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
            }
        }


    }
}
