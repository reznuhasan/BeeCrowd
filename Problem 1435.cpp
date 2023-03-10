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
        for(int i=0;i<(n/2)+1;i++){
            for(int j=i+0;j<n-i;j++){
                for(int k=i+0;k<n-i;k++){
                    arr[j][k]=i+1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int k=0;k<n;k++){
                 if(k == 0)
                    cout << setw(3) << arr[i][k];
                else
                    cout << " " << setw(3) << arr[i][k];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
