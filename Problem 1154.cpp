#include<bits/stdc++.h>
using namespace std;

int main(){
    float res=0;
    int sum=0;
    while(1){
        float n;
        cin>>n;
        if(n<0){
            break;
        }
        res+=n;
        sum+=1;
    }
    float avg=res/sum;
    cout<<fixed<<setprecision(2)<<avg<<endl;
}
