#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>
 
int main(){
  //Ternary numeric notation is quite popular in Berland. To telegraph the ternary number the Borze alphabet is used. 
	//Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--». You are to decode the Borze code, i.e. to find out the ternary number given its representation in Borze alphabet.
	string s;
  cin >> s;
 
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == '.') {
      cout << 0;
    } else {
      if (s[i + 1] == '.') {
        cout << 1;
      } else {
        cout << 2;
      }
      ++i;
    }
  }
}
