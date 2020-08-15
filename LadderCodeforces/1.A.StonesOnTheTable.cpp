#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>
 
int main(){
  int n, contador=0, diferentes=0;
	string s, final;
  cin >> n;
  cin >> s;
 
  for (int i = 0; i < n; ++i) {
    if(i==0){
      diferentes++;
    }
    else{
      if(s[i]==s[i-1]){
        contador++;
      }
      else{
        diferentes++;
      }
    }
  }
  cout << contador;
}
