#include<bits/stdc++.h>
using namespace std;

int main(){
    int startHour,startM,finishHour,finishM;
    cin>>startHour>>startM>>finishHour>>finishM;
    int start=(startHour*60)+startM;
    int finish=(finishHour*60)+finishM;
    if(start==finish){
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    }else if(start>finish){
        int sub=(24*60)-start;
        int dur=sub+finish;
        int hour=dur/60;
        int minute=dur%60;
        cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
    }else{
        int dur=finish-start;
        int hour=dur/60;
        int minute=dur%60;
        cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
    }
}
