#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n, r;
	cin >> n >> r;
	vector<int> a(n);
	vector<int> heaters;
	for(int i=1; i<=n; i++){
		cin >> a[i];
		if(a[i] == 1){
			heaters.push_back(i);
		} 
	}

	bool flag=false, possible=true; //flag indica si todos los espacios son calentados
	int auxStart, auxEnd, begin=1, HeatersNeeded=0;
	for(int i=0; i<heaters.size(); i++){
		auxStart = heaters[i] - r +1;		//inicio de mi rango temporal
		auxEnd = heaters[i] + r - 1;		//fin de mi rango temporal
		if(auxStart <= begin){	//if el inicio de mi rango temporal <= minimo requerido y el más hacia la derecha
			flag = true;		
		}else{
			if(i!=0){
				i--;
				begin = heaters[i] + r; // no ponemos -1 porque el siguiente inicio podria ser el espacio siguiente al que acabamos de pasar
				flag = false;	//si no podemos encontrar un espacio que su inicio sea <= o <=+1 entonces hay un espacio frío
				HeatersNeeded++;
			}
			
		}
		if(flag==true && auxEnd >=n){		//para no irnos al más hacia la derecha si cubre el último espacio
			HeatersNeeded++;
			break;
		}
		if(i==heaters.size()-1 && auxEnd < n) {
			possible = false;
		}
		if(flag==false && auxStart>begin){ //este es el caso en el que hay al menos un espacio frío
			possible = false;
			break;
		}
	}
	if(heaters.size() == 0 || HeatersNeeded==0) {
		possible = false; //si no hay suficientes calentadores o no se cubren todos los espacios
	}
	if(possible==false){
		cout << "-1" << endl;
	} 
	else {
		cout << HeatersNeeded << endl;
	}

	return 0;
}
