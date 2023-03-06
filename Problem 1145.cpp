#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int flag=1;
    for(int i=1;i<=y;i++){
        if(flag==x){
            cout<<i<<endl;
            flag=1;
        }else{
            cout<<i<<" ";
            flag++;
        }
    }

}
