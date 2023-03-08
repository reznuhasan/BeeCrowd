#include<bits/stdc++.h>
using namespace std;

int main(){
    double arr[100];
    double n;
    cin>>n;
    for(int i=0;i<100;i++){
        arr[i]=n;
        n=n/2.0;
    }
    for(int i=0;i<100;i++){
        cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<arr[i]<<endl;
    }
}
