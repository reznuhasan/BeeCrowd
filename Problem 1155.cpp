#include<bits/stdc++.h>
using namespace std;

int main(){
    float res=0;
    for(float i=1;i<=100;i++){
        res+=1/i;
    }
    cout<<fixed<<setprecision(2)<<res<<endl;
}

