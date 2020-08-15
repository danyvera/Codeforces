#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);

int main(){
  
  int n, xs=0, otras=0, consulta, contador=0, contador2=0;
  cin>>n;
  string palabra; 
  cin>>palabra;

  for(int i=0; i<=n;i++){
      if(palabra[i]=='x'){
          xs++;
      }
      else{
        if(xs>2){
            consulta=1;
            contador=xs-2;
            contador2+=contador;
          }
          else{
            consulta=2;
            contador2+=0;
          }
        otras++;
        //cout << xs << otras<< consulta<< endl;
        xs=0;
      }
  }

  cout << contador2 << endl;
}