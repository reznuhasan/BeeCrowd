#include<bits/stdc++.h>
using namespace std;

int main(){
    int interWin=0;
    int gremioWin=0;
    int draw=0;
    int total=0;
    while(1){
        int inter;
        int gremio;
        cin>>inter>>gremio;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        total+=1;
        if(inter>gremio){
            interWin+=1;
        }else if(gremio>inter){
            gremioWin+=1;
        }else{
            draw+=1;
        }
        int n;
        cin>>n;
        if(n==2){
          break;
        }
    }
    cout<<total<<" grenais"<<endl;
    cout<<"Inter:"<<interWin<<endl;
    cout<<"Gremio:"<<gremioWin<<endl;
    cout<<"Empates:"<<draw<<endl;
    if(interWin>gremioWin){
        cout<<"Inter venceu mais"<<endl;
    }else if(gremioWin>interWin){
        cout<<"Gremio venceu mais"<<endl;
    }else{
        cout<<"Não houve vencedor"<<endl;
    }
}
