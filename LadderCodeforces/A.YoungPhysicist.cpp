#include<bits/stdc++.h>
using namespace std;
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);
#define MAX 105
 
// Encontrar si el objeto en coordenadas (x,y,z) está en equilibrio, en caso de que lo esté, la suma de los n vectores dados, debe ser cero 
 
int main(){
  optimizar_io
  int n, suma1=0, suma2=0, suma3=0;
  cin>> n;
 
  for(int i = 0; i < n; ++i){
  vector<int> vector1(3,0);
    for (int i =0; i<3; i++){
      cin>> vector1[i];
      if (i==0){
        suma1+= vector1[0];
      }
      if (i==1){
        suma2+= vector1[1];
      }
      if (i==2){
        suma3+= vector1[2];
      }
    }
  }
 
  vector<int> suma(3,0);
    for (int i =0; i<3; i++){
      if (i==0){
        suma[0]=suma1;
      }
      if (i==1){
        suma[1]=suma2;
      }
      if (i==2){
        suma[2]=suma3;
      }
    }
 
  //for (int i =0; i<3; i++){
  //  cout << suma[i] ;
  //  cout << " ";
  //}
 
  if (suma1==0 && suma2==0 && suma3==0 )
  {
    cout << "YES";
  }
  else{
    cout << "NO";
  }
 
}

  for (int i =0; i<n; i++){
    if (i==n-1){
      cout << final[i] ;
    }
    else{
      cout << final[i] ;
      cout << "+";
    }
}

}
