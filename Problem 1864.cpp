#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="Life is not a problem to be solved";
    for(int i=0;i<str.length();i++){
        str[i]=toupper(str[i]);
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i==n-1){
            cout<<str[i]<<endl;
        }else{
            cout<<str[i];
        }
    }
}
