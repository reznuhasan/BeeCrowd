#include<bits/stdc++.h>
using namespace std;

int main(){
    float num;
    cin>>num;
    float increase=0;
    float result=0;
    int percentage=0;

    if(num>=0 && num<=400){
        increase=(num/100)*15;
        result=num+increase;
        percentage=15;

    }else if(num>400 && num<=800){
        increase=(num/100)*12;
        result=num+increase;
        percentage=12;
    }else if(num>800 && num<=1200){
        increase=(num/100)*10;
        result=num+increase;
        percentage=10;
    }else if(num>1200 && num<=2000){
        increase=(num/100)*7;
        result=num+increase;
        percentage=7;
    }else if(num>2000){
        increase=(num/100)*4;
        result=num+increase;
        percentage=4;
    }
    cout<<"Novo salario: "<<fixed<<setprecision(2)<<result<<endl;
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<increase<<endl;
    cout<<"Em percentual: "<<percentage<<" %"<<endl;

}
