#include<bits/stdc++.h>
using namespace std;

int main(){
    float res=0;
    int multi=1;
    for(float i=1;i<=39;i+=2){
        cout<<i<<" "<<multi<<endl;
       res+=(i/multi);
       multi*=2;
    }
    cout<<fixed<<setprecision(2)<<res<<endl;
}
