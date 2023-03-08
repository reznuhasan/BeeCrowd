#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[1000];
    int n;
    cin>>n;
    int t=0;
    for(int i=0;i<10;i++){
        if(t<n-1){
            arr[i]=t;
            t++;
        }else{
            arr[i]=t;
            t=0;
        }
    }
    for(int i=0;i<10;i++){
        cout<<"N["<<i<<"] = "<<arr[i]<<endl;
    }
}
