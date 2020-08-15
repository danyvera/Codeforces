#include<bits/stdc++.h>
using namespace std;
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);
 
int main(){
  map<long long int, int> cubeta;
  int numero;
 
  for(int i = 0; i < 4; ++i){
    cin>> numero;
    cubeta[numero]++;
  }
  int diferentes = cubeta.size();
  int repetidos= 4-diferentes;
 
  cout << repetidos ;
}