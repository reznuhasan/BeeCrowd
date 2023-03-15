#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && b<=c){
        cout<<"1, :)"<<endl;
    }else if(a<b && b>=c){
        cout<<"2, :("<<endl;
    }else if(a<b && b<c && b-a>c-b){
        cout<<"3, :("<<endl;
    }else if(a<b && b<c && b-a<=c-b){
        cout<<"4, :)"<<endl;
    }else if(a>b && b>c && a-b>b-c){
        cout<<"5, :)"<<endl;
    }else if(a>b && b>c && a-b<=b-c){
        cout<<"6, :("<<endl;
    }else if(a==b && b<c){
        cout<<"7, :)"<<endl;
    }else if(a==b && b>=c){
        cout<<"8, :("<<endl;
    }
}
