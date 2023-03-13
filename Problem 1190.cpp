#include<bits/stdc++.h>
using namespace std;

int main(){
    double arr[12][12];
    char t;
    cin>>t;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>arr[i][j];
        }
    }
    double avg=0;
    double sum=0;
    int flag=0;
    cout<<endl<<endl;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
           if(j>i && j>11-i){
            cout<<arr[i][j]<<" ";
            sum+=arr[i][j];
            flag++;
           }
        }
       cout<<endl<<endl;
    }
    if(t=='S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }else if(t=='M'){
        cout<<fixed<<setprecision(1)<<sum/flag<<endl;
    }
}








