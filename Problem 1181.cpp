#include<bits/stdc++.h>
using namespace std;

int main(){
    float arr[12][12];
    int n;
    cin>>n;
    char t;
    cin>>t;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    float avg=0;
    float sum=0;
    for(int i=0;i<4;i++){
        sum+=arr[n][i];
    }
    if(t=='S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }else if(t=='M'){
        cout<<fixed<<setprecision(1)<<sum/12<<endl;
    }
}
