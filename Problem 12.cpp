#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    double r=(4/3.0);
    double pi=3.14159;
    long long int value=pow(n,3);
    double result=(double)value*r*pi;
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<result<<endl;
}
