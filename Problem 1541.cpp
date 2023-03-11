#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int a,b,c;
        cin>>a;
        if(a==0){
            break;
        }
        cin>>b>>c;
        int mul=a*b;
        float value=mul/(c/100.0);
        int sizeOfLand=sqrt(value);
        cout<<sizeOfLand<<endl;


    }
}
