#include<bits/stdc++.h>
using namespace std;
 
int main(){
  //para sacar el promedio de los elementos de un vector
  //debemos sumar los n numeros dados en el vector y luego dividir este resultado entre n y asi tenemos nuestro resultado final
  int n;
  float suma=0, resultado;
  cin>> n;
 
vector<int> vector1(n,0);
  for (int i =0; i<n; i++){
    cin>> vector1[i];
    suma+=vector1[i];
  }
 
resultado=suma/n;
cout << resultado;
 
}
