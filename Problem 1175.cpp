#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[20];
    for(int i=0;i<20;i++){
        int n;
        cin>>n;
        arr[i]=n;
    }
    for(int i=0;i<20/2;i++){
        int temp=arr[0+i];
        arr[0+i]=arr[19-i];
        arr[19-i]=temp;
    }
    for(int i=0;i<20;i++){
        cout<<"N["<<i<<"] = "<<arr[i]<<endl;
    }
}
