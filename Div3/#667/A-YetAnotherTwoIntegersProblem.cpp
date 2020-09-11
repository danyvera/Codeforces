#include<bits/stdc++.h>
using namespace std;
#include <iostream>
 
int main(){
	int t, a, b, moves=0, NumbersInBetween;
	cin>>t;
	for (int i = 0; i < t; ++i){
		cin>>a>>b;
		if(a==b){
			moves=0;
		}
		else if(a>b){// restale a a para que se convierta en b
			NumbersInBetween=a-b;
			moves= (NumbersInBetween+9)/10;
		}
		else{//a<b sumale a a para que se convierta en b
			NumbersInBetween=b-a;
			moves= (NumbersInBetween+9)/10;
		}
		cout<<moves<<endl;
	}
	return 0;
}
