#include<bits/stdc++.h>
using namespace std;

int main(){
    string t;
    int d,hr,m,s,fday,fhr,fm,fs;
    cin>>t>>d;
    cin>>hr>>t>>m>>t>>s;
    cin>>t>>fday;
    cin>>fhr>>t>>fm>>t>>fs;

    int start_day=d;
    int start_time=(hr*3600)+(m*60)+s;
    int finish_day=fday;
    int finish_time=(fhr*3600)+(fm*60)+fs;
    int total_time=0;
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
    cout<<spent_day<<endl;
    cout<<spent_hour<<endl;
    cout<<spent_min<<endl;
    cout<<spent_sec<<endl;
}
