#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);
 
int main(){
	string palabra, final;
  	cin>>palabra;
 
 	for(int i=0; i<palabra.size();i++){
        if(palabra[i]=='a'||palabra[i]=='e'||palabra[i]=='i'||palabra[i]=='o'||palabra[i]=='u'||palabra[i]=='A'||palabra[i]=='E'||palabra[i]=='I'||palabra[i]=='O'||palabra[i]=='U'||palabra[i]=='y'||palabra[i]=='Y'){
        }
        else{ 
          final += palabra[i]; 
          }
    }
 
    for(int i = 0; i < final.size(); i++){
      final[i] = tolower(final[i]);
      cout<<'.'<<final[i];
    }
}