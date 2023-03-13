#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int N[10];
    for(int i=0;i<10;i++){
        N[i]=n;
        n*=2;
    }
    for(int i=0;i<10;i++){
        cout<<"N["<<i<<"]"<<" = "<<N[i]<<endl;
    }
}
