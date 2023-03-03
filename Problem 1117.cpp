#include<bits/stdc++.h>
using namespace std;

int main(){
    float x=0;
    float y=0;
    while(true){
        float n;
        cin>>n;
        if(n>=0 && n<=10){
           x=n;
           break;
        }else{
            cout<<"nota invalida"<<endl;
        }
    }
    while(1){
        float n;
        cin>>n;
        if(n>=0 && n<=10){
           y=n;
           break;
        }else{
            cout<<"nota invalida"<<endl;
        }
    }
    float res=(x+y)/2;
    cout<<"media = "<<fixed<<setprecision(2)<<res<<endl;
}
