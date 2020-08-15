#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>
 
int main(){
  
  int n, caras=0, total=0;
  cin>> n;
 
  
  string poligonos[5] = { "Tetrahedron", "Cube", "Octahedron", "Dodecahedron", "Icosahedron" }; 
 
  string poli[n];
 
  for (int i =0; i<n; i++){
    cin>> poli[i];
 
    if (poli[i]== poligonos[0]){
      caras= 4;
    }
    else if (poli[i]== poligonos[1]){
      caras= 6;
    }
    else if (poli[i]== poligonos[2]){
      caras= 8;
    }
    else if (poli[i]== poligonos[3]){
      caras= 12;
    }
    else if (poli[i]== poligonos[4]){
      caras= 20;
    }
    else {
      caras= 0;
    }
    total=total + caras;
  }
    cout << total << endl;
}