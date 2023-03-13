#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int m,n;
        cin>>m>>n;
        if(m<=0 || n<=0){
            break;
        }
        if(m>n){
            int temp=m;
            m=n;
            n=temp;
        }
        int sum=0;
        for(int i=m;i<=n;i++){
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"Sum="<<sum<<endl;


}


}
