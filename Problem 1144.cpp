#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>1 && n<1000)
    {
        for(int i=1; i<=n; i++)
        {
            cout<<i<<" "<<(i*i)<<" "<<(i*i*i)<<endl;
            cout<<i<<" "<<(i*i)+1<<" "<<(i*i*i)+1<<endl;
        }
    }
}


