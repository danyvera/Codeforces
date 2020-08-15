#include<bits/stdc++.h>
using namespace std;

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
