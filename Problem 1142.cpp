#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){

            if(k%4==0){
                cout<<"PUM"<<endl;
            }else{
                 cout<<k<<" ";
            }

            k++;
        }

    }
}
