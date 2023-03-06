#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int flag=1;
    if((x>1 && x<20) && (y>x && y<100000))
    {
        for(int i=1; i<=y; i++)
        {
            cout<<i<<" ";
            if(x>flag){
                flag++;
            }else{
               flag=1;
               cout<<endl;
            }


        }
    }

}
