#include<bits/stdc++.h>
using namespace std;
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);
 
int main(){
  optimizar_io
  int n, suma=0, maximo, pasajeros=0;
  cin>> n;
  int matrix[n][2];
  vector<int> suben(n,0);
  vector<int> bajan(n,0);
  vector<int> resta(n,0);
 
  for(int i = 0; i < n; ++i)
  {
    for(int j = 0; j < 2; ++j)
    {
        cin>> matrix[i][j];
        if(j==0){
            bajan[i]=matrix[i][j] ;
        }
        else if(j==1){
            suben[i]=matrix[i][j] ;
        }
    }
  }
    
    for (int i =0; i<n; i++){
      resta[i]=suben[i]-bajan[i];
      suma += resta[i];
 
      if(suma>pasajeros){
            pasajeros=suma;
        }
    }
      cout << pasajeros;
}