#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3];
    int a,b,c;
    cin>>a>>b>>c;
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    int m=arr[0];
    for(int i=0;i<3;i++){
        if(arr[i]>m){
            m=arr[i];
        }
    }
    cout<<m<<" eh o maior"<<endl;
}
