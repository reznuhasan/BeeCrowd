#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int r=a%b;
    int q=a/b;
    if(r<0){
        if(b<0){
            q=q+1;
            r=a-(b*q);
            q=q-1;
        }else{
            q--;
            r=a-(b*q);
            q=(a-r)/b;
        }


    }

    cout<<q<<" "<<r<<endl;


}
