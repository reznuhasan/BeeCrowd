#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int h=t/(3600);
    t=t%3600;
    int m=t/60;
    t=t%60;
    cout<<h<<":"<<m<<":"<<t<<endl;

}
