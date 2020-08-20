#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
  	cin>> t;
  	for (int j =0; j<t; j++){
  		int n, k, contador, MesasAOcupar=0, aux;
  		cin>>n>>k;
  		string mesas;
  		cin>>mesas;
  		contador=k;
 
  		for(int i=0; i<mesas.size(); i++){
  			if(mesas[i]=='0'){
  				contador++;
  			}
  			else{
  				aux=(contador-k)/(k+1);
  				MesasAOcupar+=aux;
  				contador=0;
  			}
  			
  		}
  		aux=contador/(k+1);
  		MesasAOcupar+=aux;
  		cout<< MesasAOcupar<< endl;
  	}
}
