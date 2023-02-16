#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int y=t/(365);
    t=t%365;
    int m=t/30;
    t=t%30;
    cout<<y<<" ano(s)"<<endl<<m<<" mes(es)"<<endl<<t<<" dia(s)"<<endl;

}

