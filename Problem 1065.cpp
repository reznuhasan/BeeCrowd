#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int even=0;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if(num%2==0){
            even +=1;
        }
    }
    cout<<even<<" valores pares"<<endl;
}

