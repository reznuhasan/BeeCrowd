#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        bool x=false;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=0;
                if(i==j){
                    arr[i][j]=2;
                }
                if(j==n-i-1){
                    arr[i][j]=3;
                }

                if((i>=n/3 && i<=n-(n/3)-1) && (j>=n/3 && j<=n-(n/3)-1)){
                    arr[i][j]=1;
                }
                if(i==n/2 && j==n/2){
                    arr[i][j]=4;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j];
                }
                cout<<endl;
            }
            cout<<endl;
        }

    }

