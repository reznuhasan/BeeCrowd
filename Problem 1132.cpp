#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int sum=0;
    if(x>y){
        int temp=x;
        x=y;
        y=temp;
    }
    for(int i=x;i<=y;i++){
       if(i%13!=0){
        sum+=i;
       }
    }
    cout<<sum<<endl;
}
