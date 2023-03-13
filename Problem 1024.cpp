#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin>>ws;
    for(int i=0;i<t;i++){
        string word;
        getline (cin,word);
        string str="";
        for(int i=0;i<word.length();i++){
           if((word[i]>=65 && word[i]<=90) || (word[i]>=97 && word[i]<=122)){
                word[i]=word[i]+3;
           }
           str=word[i]+str;
        }
        string res="";
        for(int i=0;i<str.length()/2;i++){
            res+=str[i];
        }
        for(int i=str.length()/2;i<str.length();i++){
            str[i]=(str[i]-1);
            res+=str[i];
        }
        cout<<res<<endl;
    }
}
