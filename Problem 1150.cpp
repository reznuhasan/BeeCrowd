#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    while(1){
        cin>>m;
        if(m>n){
            break;
        }
    }
    int sum=0;
    int flag=0;
    while(sum<=m){
        sum+=n;
        n++;
        flag++;
    }
    cout<<flag<<endl;
}
