#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>
 
int main(){
  	//los numeros 7 y 4 son considerados numeros de la suerte
	//Desafortunadamente, no todos los números tienen suerte. 
	//Petya llama a un número casi afortunado si el número de dígitos de la suerte es un número afortunado. 
	//Se pregunta si el número n es un número casi afortunado.
	// Imprimimos 'YES'si el numero de digitos de la suerte que hay en el numero dado es 7 o 4
	// en caso contrario, imprimimos 'NO'
  
  	string palabra;
  	int n, numerosuerte=0;
  	cin>>palabra;
 	
 	n=palabra.size();
 
	for(int i=0; i<n; i++){
 		if (palabra[i]=='7'|| palabra[i]=='4'){
 			numerosuerte++;
 		}
	}
 
	if (numerosuerte==7|| numerosuerte==4){
 		cout << "YES" << endl;
 	}
 	else{
 		cout << "NO" << endl;
 	}
 
}
