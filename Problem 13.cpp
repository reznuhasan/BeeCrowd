#include<bits/stdc++.h>
using namespace std;

int main(){
    float a,b,c;
    cin>>a>>b>>c;
    float TRIANGULO=(1/2.0)*a*c;
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<TRIANGULO<<endl;
    float CIRCULO=pow(c,2)*3.14159;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<CIRCULO<<endl;
    float t=(1/2.0)*(a+b)*c;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<t<<endl;
    float s=pow(b,2);
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<s<<endl;
    float rec=a*b;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<rec<<endl;
}
