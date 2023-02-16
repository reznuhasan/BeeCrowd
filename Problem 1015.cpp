#include<bits/stdc++.h>
using namespace std;

int main(){
    double x,y;
    cin>>x>>y;
    double a,b;
    cin>>a>>b;
    double result=sqrt(pow((a-x),2)+pow((b-y),2));
    cout<<fixed<<setprecision(4)<<result<<endl;
}
