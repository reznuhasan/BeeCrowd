#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int n;
        cin>>n;
        int arr[n][n];
        if(n<=0){
            break;
        }

        for(int i=0;i<n;i++){
             int chk1=0;
             int chk2=i+1;
             for(int j=0;j<n;j++){
                if(i<=j){
                    chk1+=1;
                    arr[i][j]=chk1;
                }
                if(i>j){
                    arr[i][j]=chk2;
                    chk2--;
                }
             }
        }
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0){
                cout<<setw(3)<<arr[i][j];
            }else{
                cout<<" "<<setw(3)<<arr[i][j];
            }
        }
        cout<<endl;
       }
       cout<<endl;
    }
}
