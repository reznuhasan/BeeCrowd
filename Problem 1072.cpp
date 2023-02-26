#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int in=0;
    int out=0;
    for(int i=0;i<t;i++){
        int num;
        cin>>num;
        if(num>=10 && num<=20){
            in++;
        }else{
            out++;
        }
    }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;
}
