#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int y;
    cin>>y;
    int sum=0;
    if(x>=0 && y>=0)
    {
        if(x>y)
        {
            int temp=x;
            x=y;
            y=temp;
        }
        for(int i=x; i<y; i++)
        {
            if(i%5==2)
            {
                cout<<i<<endl;
            }
            else if(i%5==3)
            {
                cout<<i<<endl;
            }
        }
    }


}
