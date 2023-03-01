#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        float a,b,c;
        cin>>a>>b>>c;
        float sumW=(a*2)+(b*3)+(c*5);
        cout<<fixed<<setprecision(1)<<sumW/10<<endl;
    }
}
