#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int prevOne=1;
    int prevTwo=-1;
    if(n<46)
    {
        for(int i=0; i<n; i++)
        {
            int res=prevOne+prevTwo;
            if(i==n-1){
               cout<<res;
            }else{
                cout<<res<<" ";
            }

            prevTwo=prevOne;
            prevOne=res;
        }
    }
    cout<<endl;


}
