#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    if(x>=1 && x<=1000){
        for(int i=1;i<=x;i++){
            if(i%2==1){
                cout<<i<<endl;
            }
        }
    }
}
