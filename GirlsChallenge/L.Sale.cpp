#include<bits/stdc++.h>
using namespace std;
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);

int main(){
  int n, m, aux, sumatoria=0, final;
  cin>> n;
  cin>> m;

  vector<int> vector1(n,0);
  for (int i =0; i<n; i++){
    cin>> vector1[i];
  }

  vector<int> vector2(n,0);
  for (int i =0; i<n; i++){
    if(vector1[i]<0){
      vector2[i]=vector1[i];
    }
  }

  for (int i=0; i<n-1; i++){
   for (int j=i+1; j<n; j++){
    if(vector2[i]>vector2[j]){
     aux = vector2[i];
     vector2[i] = vector2[j];
     vector2[j] = aux;
    }
   }
  }
  for (int i = 0; i < m; i++) {
    int numeroActual = vector2[i];
    sumatoria = sumatoria + numeroActual;
  }
  final= sumatoria*(-1);
  cout << final;
}