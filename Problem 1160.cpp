#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
       int p1,p2;
       cin>>p1>>p2;
       float g1,g2;
       cin>>g1>>g2;
       int flag=0;
       while(p1<=p2){
        p1=p1+(p1*(g1/100));
        p2=p2+(p2*(g2/100));
        flag++;
        if(flag>100){
            cout<<"Mais de 1 seculo."<<endl;
        }
       }
       if(flag<=100){
           cout<<flag<<" anos."<<endl;
       }
    }

}
