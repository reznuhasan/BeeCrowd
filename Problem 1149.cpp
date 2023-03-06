#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    int b;
    while(1){
        cin>>b;
        if(b>0){
            break;
        }
    }
    int sum=0;
    for(int i=0;i<b;i++){
        sum+=i+a;
    }
    cout<<sum<<endl;
}
