#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int min=0;
    int max=0;
    if(x>y){
        min=y;
        max=x;
    }else{
        min=y;
        max=x;
    }
    int sum=0;
    for(int i=min+1;i<max;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    cout<<sum<<endl;

}
