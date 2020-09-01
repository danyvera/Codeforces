#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>
 
int f(int x){
	x=x+1;
	while(x%10 ==0){
		x/=10;
	}
 
	return x;
}
int main(){
	int n;
	cin >> n;
	set <int> numeros;
 
	for(int i=0; i<1000; i++){
		numeros.insert(n);
		n=f(n);
	}
	cout<< numeros.size()<<endl;
 
}
