#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        int n;
        cin>>n;
        if(n<=0){
            arr[i]=1;
        }else{
            arr[i]=n;
        }
    }
    for(int i=0;i<10;i++){
        cout<<"X["<<i<<"]"<<" = "<<arr[i]<<endl;
    }
}
