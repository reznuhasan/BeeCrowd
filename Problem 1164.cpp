#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int sum=0;
        for(int i=1;i<n;i++){
            if(n%i==0){
                sum+=i;
            }
        }
        if(sum==n){
            cout<<n<<" eh perfeito"<<endl;
        }else{
            cout<<n<<" nao eh perfeito"<<endl;
        }
    }
}

