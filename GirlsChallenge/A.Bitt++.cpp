#include<bits/stdc++.h>
using namespace std;
#include <string.h>

//link del problema en codeforces: https://codeforces.com/contest/282/problem/A
 
	int main(){
 
		int n, contador=0;
		cin>>n;
		string Operacion;
		
		for(int i=0; i<n;i++){
			cin>>Operacion;
        		if(Operacion=="X++"||Operacion=="++X"){
            		contador++;
        		}
        		else{
            		contador--;
        		}
    	}
    	cout<< contador;
 
	}
