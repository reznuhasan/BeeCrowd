#include<bits/stdc++.h>
using namespace std;

int main(){
    float arr[12][12];
    char t;
    cin>>t;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>arr[i][j];
        }
    }
    float avg=0;
    float sum=0;
    int flag=0;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
           if(j>i && j<11-i){
              cout<<arr[i][j]<<" ";
//            sum+=arr[i][j];
//            flag++;
           }
        }
        cout<<endl;


    }
    if(t=='S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }else if(t=='M'){
        cout<<fixed<<setprecision(1)<<sum/flag<<endl;
    }
}






