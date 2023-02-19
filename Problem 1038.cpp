#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    float result;
    if(x==1){
        result=y*4.00;
    }else if(x==2){
        result=y*4.50;
    }else if(x==3){
        result=y*5.00;
    }else if(x==4){
        result=y*2.00;
    }else if(x==5){
        result=y*1.50;
    }
    cout<<"Total: R$ "<<fixed<<setprecision(2)<<result<<endl;
}
