#include<bits/stdc++.h>
using namespace std;

int main(){
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    float weightSum=(a*2)+(b*3)+(c*4)+(d*1);
    float weightAvg=weightSum/10;
    cout<<"Media: "<<fixed<<setprecision(1)<<weightAvg<<endl;
    if(weightAvg>=7){
        cout<<"Aluno aprovado."<<endl;
    }else if(weightAvg<5){
        cout<<"Aluno reprovado."<<endl;
    }else if(weightAvg>=5 && weightAvg<=6.9){
        cout<<"Aluno em exame."<<endl;
        float n;
        cin>>n;
        cout<<"Nota do exame: "<<fixed<<setprecision(1)<<n<<endl;
        float avg=(weightAvg+n)/2;
        if(avg>=5){
            cout<<"Aluno aprovado."<<endl;
        }else if(avg<5){
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<fixed<<setprecision(1)<<avg<<endl;
    }
}
