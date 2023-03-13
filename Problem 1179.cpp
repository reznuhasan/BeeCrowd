#include<bits/stdc++.h>
using namespace std;

int main()
{
    int par[5];
    int impar[5];
    int odd=0;
    int even=0;
    for(int i=0; i<15; i++)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            par[even]=n;
            even++;
        }
        else
        {
            impar[odd]=n;
            odd++;
        }
        if(even==5)
        {
            int len=even;
            even=0;
            for(int i=0; i<len; i++)
            {
                cout<<"par["<<i<<"] = "<<par[i]<<endl;
                par[i]=0;
            }
        }
        if(odd==5)
        {
            int len=odd;
            odd=0;
            for(int i=0; i<len; i++)
            {
                cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
                impar[i]=0;
            }

        }
    }
    for(int i=0; i<odd; i++)
    {
        cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
    }
    for(int i=0; i<even; i++)
    {
        cout<<"par["<<i<<"] = "<<par[i]<<endl;
    }
}
