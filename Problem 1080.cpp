#include<bits/stdc++.h>
using namespace std;

int main(){
    int flag=0;
    int pos=0;
    for(int i=1;i<=5;i++){
        int n;
        cin>>n;
        if(n>flag){
            flag=n;
            pos=i;
        }
    }
    cout<<flag<<endl;
    cout<<pos<<endl;
}
