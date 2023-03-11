#include<bits/stdc++.h>
using namespace std;

int main(){
    int space=0;
    while(1){
        int n;
        cin>>n;
        if(n==0){
            break;
        }
        if(n>1 && n%2==0){
            space=n/2;
        }else if(n>1 && n%2==1){
            space=(n/2)+1;
        }

        long long int arr[n][n];
        int flag=1;
        for(int i=0;i<n;i++){
            int check=flag;
            for(int j=0;j<n;j++){
                arr[i][j]=check;
                check*=2;
            }
            flag*=2;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==0){
                    for(int k=1;k<space;k++){
                        cout<<" ";
                    }
                    cout<<arr[i][j];
                }else{
//                   for(int k=0;k<space;k++){
//                        cout<<"%";
//                    }
                    cout<<" "<<setw(space)<<arr[i][j];
                }

            }
            cout<<endl;
        }
    }
}
