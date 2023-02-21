#include<bits/stdc++.h>
using namespace std;

int main(){
    int start,finish;
    cin>>start>>finish;
    if(start==finish){
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    }else if(start>finish){
        int sub=24-start;
        int dur=sub+finish;
        cout<<"O JOGO DUROU "<<dur<<" HORA(S)"<<endl;
    }else{
        int dur=finish-start;
        cout<<"O JOGO DUROU "<<dur<<" HORA(S)"<<endl;
    }
}
