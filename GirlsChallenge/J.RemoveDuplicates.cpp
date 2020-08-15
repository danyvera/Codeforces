#include<bits/stdc++.h>
using namespace std;
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);

int main(){
	int n;
	cin>> n;
  	map<int, int> cubeta;
  	int numero;
  	vector<int> v;
  	vector<int> datos(n,0);
  	for (int i =0; i<n; i++){
    	cin>> datos[i];
  	}


  for(int i = n-1; i >=0; i--){
    if (cubeta[datos[i]]==0){
    	v.push_back(datos[i]);
    }
    cubeta[datos[i]]++;
  }

  	int diferentes = v.size();
  	cout << diferentes << endl;
 	for (int i = diferentes-1; i >=0; i--){
    		cout << v[i] ;
    		cout << " ";
  }

}