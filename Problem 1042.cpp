#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b && a<c){
        cout<<a<<endl;
        if(b<c){
            cout<<b<<endl;
        }else{
            cout<<c<<endl;
        }
        if(c>b){
            cout<<c<<endl;
        }else{
            cout<<b<<endl;
        }
    }else if(b<a && b<c){
        cout<<b<<endl;
        if(a<c){
            cout<<a<<endl;
        }else{
            cout<<c<<endl;
        }
        if(c>a){
            cout<<c<<endl;
        }else{
            cout<<a<<endl;
        }
    }else{
        cout<<c<<endl;
        if(b<a){
            cout<<b<<endl;
        }else{
            cout<<a<<endl;
        }
        if(a>b){
            cout<<a<<endl;
        }else{
            cout<<b<<endl;
        }
    }
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
}
