#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n, tamano;
  string palabra, aux;
  cin>> n;
  string palabras[n];
 
  for (int i =0; i<n; i++){
    cin>>palabra;
    tamano=palabra.size();
    aux=palabra;
    
    for (int j =0; j<tamano; j++){
      if(j==0){
          palabras[i]+=aux[j];
        }
      else{
        palabras[i]+=aux[j];
        j++;
      }
    }
    cout<<palabras[i]<<endl;
  }
}
