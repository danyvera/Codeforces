#include<bits/stdc++.h>
using namespace std;
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);

int main(){
  optimizar_io
  int n, contador1, contador2=0;
  cin>> n;
  int matriz[n][3];
  vector <int> suma(n,0);

  for(int i = 0; i < n; ++i){
    contador1=0;
    for(int j = 0; j < 3; ++j){
        cin>> matriz[i][j];
        contador1+=matriz[i][j];
    }
    suma[i]=contador1;
    
    if(suma[i]>1){
            contador2+=1;
        }
  }
  cout << contador2 ;
  
}