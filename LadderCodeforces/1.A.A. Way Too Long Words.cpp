#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>
 
int main(){
 
//se nos pide leer n palabras y tenemos que reimprimirlas segun su longitud
  // si miden menos o igual a 10, entonces imprimimos la palabra tal cual entró
  // en cambio, si miden mas de 10, entonces imprimimos losiguiente: primeraletraLETRASENTREultimaletra
  //LETRASENTRE representa la cantidad de letras que hay entre la primera letra y la ultima letra de la palabra
  // por ejemplo, la palabra "word "tiene 4 letras, entonces la imprimimos igual: "word"
  //pero la palabra 'optimizaciones', tiene 14 letras, locual es mayor a 10, entonces la imprimimos de la siguiente manera: "o12s"
  	int n, tamano, lfinal, letras;
    string palabrai;
    cin>> n;
 
  string poli[n];
 
  for (int i =0; i<n; i++){
    cin>> poli[i];
    tamano=poli[i].size();
    palabrai=poli[i];
    //"lfinal" es la posicion de la letra final en la palabra i
    lfinal=tamano-1;
    //"letras" son el numero de letras que hay entre la primera letra y la ultima letra, o sea tamano-2
    letras=tamano-2;
 
    if (tamano>10){
      cout << palabrai[0]<<letras<< palabrai[lfinal]<< endl;
    }
    else {
     
    cout << palabrai << endl;
    }
    
  }
    
}
