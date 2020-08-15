#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);
 
int main(){
  
	string palabra;
  int n, mayusculas=0, minusculas=0;
  cin>>palabra;
 	
 	n=palabra.size();
  vector<int> nuevo(n,0);
 
 	for(int i=0; i<palabra.size(); i++){
    	if(palabra[i]=='A'|| palabra[i]=='B'|| palabra[i]=='C'|| palabra[i]=='D'|| palabra[i]=='E'|| palabra[i]=='F'|| palabra[i]=='G'|| palabra[i]=='H'|| palabra[i]=='I'|| palabra[i]=='J'|| palabra[i]=='K'|| palabra[i]=='L'|| palabra[i]=='M'|| palabra[i]=='N'|| palabra[i]=='O'|| palabra[i]=='P'|| palabra[i]=='Q'|| palabra[i]=='R'|| palabra[i]=='S'|| palabra[i]=='T'|| palabra[i]=='U'|| palabra[i]=='V'|| palabra[i]=='W'|| palabra[i]=='X'|| palabra[i]=='Y'|| palabra[i]=='Z'){
        		mayusculas++;
     	}
      if(palabra[i]=='a'|| palabra[i]=='b'|| palabra[i]=='c'|| palabra[i]=='d'|| palabra[i]=='e'|| palabra[i]=='f'|| palabra[i]=='g'|| palabra[i]=='h'|| palabra[i]=='i'|| palabra[i]=='j'|| palabra[i]=='k'|| palabra[i]=='l'|| palabra[i]=='m'|| palabra[i]=='n'|| palabra[i]=='o'|| palabra[i]=='p'|| palabra[i]=='q'|| palabra[i]=='r'|| palabra[i]=='s'|| palabra[i]=='t'|| palabra[i]=='u'|| palabra[i]=='v'|| palabra[i]=='w'|| palabra[i]=='x'|| palabra[i]=='y'|| palabra[i]=='z'){
            minusculas++;
      }
   	}
 
  if(mayusculas>minusculas){
    for(int i = 0; palabra[i]; i++)
      palabra[i] = toupper(palabra[i]); //<--convierte a mayusulas 
  }
  else{
    for(int i = 0; palabra[i]; i++)
      palabra[i] = tolower(palabra[i]); //<--convierte a minusculas 
  }
 
  cout << palabra << endl;
}
