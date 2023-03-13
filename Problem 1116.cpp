#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        if(y==0){
            cout<<"divisao impossivel"<<endl;
        }else{
            float div=float(x/(float)y);
            cout<<fixed<<setprecision(1)<<div<<endl;
        }


    }
}
