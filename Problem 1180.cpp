#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int smallNum=arr[0];
   int smallPos=0;
   for(int i=0;i<n;i++){
    if(smallNum>arr[i]){
        smallNum=arr[i];
        smallPos=i;
    }
   }
   cout<<"Menor valor: "<<smallNum<<endl;
   cout<<"Posicao: "<<smallPos<<endl;
}
