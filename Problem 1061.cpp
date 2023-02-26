#include<bits/stdc++.h>
using namespace std;

int main(){
    string t;
    int d,hr,m,s,fday,fhr,fm,fs;
    cin>>t>>d;
    cin>>hr>>t>>m>>t>>s;
    cin>>t>>fday;
    cin>>fhr>>t>>fm>>t>>fs;

//    start day
    int start_day=d;
//  calculate starting time in second
    int start_time=(hr*3600)+(m*60)+s;
//  finish day
    int finish_day=fday;
//  calculate finish time in second
    int finish_time=(fhr*3600)+(fm*60)+fs;
    int total_time=0;
    //when starting time greater then finish time
    if(start_time>finish_time){
       int dur=(24*3600)-start_time;
       total_time=dur+finish_time;
       start_day+=1;
    }else{
        total_time=finish_time-start_time;
    }
    int spent_day=finish_day-start_day;
    int spent_hour=total_time/3600;
    total_time%=3600;
    int spent_min=total_time/60;
    total_time%=60;
    int spent_sec=total_time;
    cout<<spent_day<<" dia(s)"<<endl;
    cout<<spent_hour<<" hora(s)"<<endl;
    cout<<spent_min<<" minuto(s)"<<endl;
    cout<<spent_sec<<" segundo(s)"<<endl;
}
