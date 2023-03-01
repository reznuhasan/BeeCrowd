#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int res=0;
    float avg=0;
    for(int i=0;i<n;i++){
        float num;
        cin>>num;
        if(num>=0){
            res +=1;
            avg +=num;
        }
    }
    cout<<res<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<avg/res<<endl;
}
