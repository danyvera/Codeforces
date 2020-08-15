#include<bits/stdc++.h>
using namespace std;
#include <string.h>

 //link para encontrar el problema en codeforces: https://codeforces.com/group/BQ6WfEWeXy/contest/288760/problem/A
 
int main(){
  char codigo[50];
  int letras;
  scanf("%[^\n]",&codigo);
 
  letras=strlen(codigo);
 
  char codigo2 [letras];
  
 
 	for(int i=0; i<letras;i++){
    	if((codigo[i]=='o')||(codigo[i]=='O')){
        		codigo2[i]='0';
     	}
      if((codigo[i]=='i')||(codigo[i]=='I')){
            codigo2[i]='1';
      }
      if((codigo[i]=='z')||(codigo[i]=='Z')){
            codigo2[i]='2';
      }
      if((codigo[i]=='E')||(codigo[i]=='e')){
            codigo2[i]='3';
      }
      if((codigo[i]=='A')||(codigo[i]=='a')){
            codigo2[i]='4';
      }
      if((codigo[i]=='s')||(codigo[i]=='S')){
            codigo2[i]='5';
      }
      if((codigo[i]=='g')||(codigo[i]=='G')){
            codigo2[i]='6';
      }
      if((codigo[i]=='t')||(codigo[i]=='T')){
            codigo2[i]='7';
      }
      if((codigo[i]=='b')||(codigo[i]=='B')){
            codigo2[i]='8';
      }
      if ((codigo[i]!='A')&&(codigo[i]!='a')&&(codigo[i]!='S')&&(codigo[i]!='s')&&(codigo[i]!='B')&&(codigo[i]!='b')&&(codigo[i]!='T')&&(codigo[i]!='t')&&(codigo[i]!='G')&&(codigo[i]!='g')&&(codigo[i]!='E')&&(codigo[i]!='e')&&(codigo[i]!='Z')&&(codigo[i]!='z')&&(codigo[i]!='I')&&(codigo[i]!='i')&&(codigo[i]!='O')&&(codigo[i]!='o')){
        codigo2[i]=codigo[i];
      }
   	}
  
  for(int i=0; i<letras;i++){
    cout<<codigo2[i];
  }
 
}
