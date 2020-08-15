#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);
 
int main(){
	
	string palabra1;
  string palabra2;
  string invertida;
 
  	cin>>palabra1;
    cin>>palabra2;
 
    for (int i = palabra1.size()-1; i >=0 ; i--){
        invertida+=palabra1[i];
    }
 
    if(palabra2 == invertida){
        cout<< "YES"<<endl;
    }
    else{
         cout<< "NO"<<endl;
    }
 
}