#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int flag=0;
        for(int i=2;i<n;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<n<<" eh primo"<<endl;
        }else{
            cout<<n<<" nao eh primo"<<endl;
        }
    }
}
