#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int x;
        cin>>x;
        if(x==0){
            break;
        }
        int sum=0;
        int i=0;
        while(i<5){
            if(x%2==0){
                sum+=x;
                i++;
            }
            x++;
        }
        cout<<sum<<endl;
    }
}
