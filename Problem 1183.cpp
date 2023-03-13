#include<bits/stdc++.h>
using namespace std;

int main(){
    float arr[12][12];
    char t;
    cin>>t;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(j>i){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    float avg=0;
    float sum=0;
    int flag=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
           if(j>i){
            sum+=arr[i][j];
            flag++;
           }
        }

    }
    if(t=='S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }else if(t=='M'){
        cout<<fixed<<setprecision(1)<<sum/flag<<endl;
    }
}


