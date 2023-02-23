#include<bits/stdc++.h>
using namespace std;

int main(){
    float n;
    int flag=0;
    for(int i=0;i<6;i++){
        cin>>n;
        if(n>=0){
            flag++;
        }
    }
    cout<<flag<<" valores positivos"<<endl;
}
