#include<bits/stdc++.h>
using namespace std;

int main(){
    float arr[100];
    for(int i=0;i<5;i++){
        float n;
        cin>>n;
        arr[i]=n;
    }
    for(int i=0;i<5;i++){
        if(arr[i]<=10){
            cout<<"A["<<i<<"] = "<<arr[i]<<endl;
        }
    }
}
