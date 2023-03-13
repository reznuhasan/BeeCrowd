#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        bool x=false;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=3;
                if(i==j){
                    arr[i][j]=1;
                }
                if(j==(n-1-i)){
                    arr[i][j]=2;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j];
            }
            cout<<endl;
        }

    }
}
