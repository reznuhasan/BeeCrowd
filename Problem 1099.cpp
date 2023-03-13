#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        int max=0;
        int min=0;
        if(x>y){
            max=x;
            min=y;
        }else{
            max=y;
            min=x;
        }
        int sum=0;
        for(int i=min+1;i<max;i++){
            if(i%2!=0){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
}
