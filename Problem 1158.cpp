#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        int sum=0;
        int j=0;
        while(j<y){
            if(x%2!=0){
                sum+=x;
                j++;
            }
            x++;
        }
        cout<<sum<<endl;


    }
}
