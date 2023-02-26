#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int even=0;
    int odd=0;
    int pos=0;
    int neg=0;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if(num%2==0){
            even +=1;
        }else{
            odd+=1;
        }
        if(num>0){
            pos+=1;
        }else if(num<0){
            neg+=1;
        }
    }
    cout<<even<<" valor(es) par(es)"<<endl;
    cout<<odd<<" valor(es) impar(es)"<<endl;
    cout<<pos<<" valor(es) positivo(s)"<<endl;
    cout<<neg<<" valor(es) negativo(s)"<<endl;
}


