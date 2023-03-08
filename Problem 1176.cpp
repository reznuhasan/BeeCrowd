#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        unsigned long long fib[n+1];
        fib[0]=0;
        fib[1]=1;
        if(n>1)
        {
            for(int i=2; i<=n; i++)
            {
                fib[i]=fib[i-1]+fib[i-2];
            }
        }
        cout<<"Fib("<<n<<") = "<<fib[n]<<endl;

    }
}
