#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);
 
int main(){
	
	string palabra;
  	int as=0, otras=0, final;
 
  	cin>>palabra;
 
 	for(int i=0; i<palabra.size();i++){
    	if(palabra[i]=='a'){
        		as++;
     	}
      else{
            otras++;
      }
  }
 
  if(as> otras){
          final= as + otras;  
      }
      else{
            final = as + as - 1;  
      }
  cout<< final <<endl;
}