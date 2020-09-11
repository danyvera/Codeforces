#include<bits/stdc++.h>
using namespace std;
#include <iostream>
 
void reduce(long long& a, long long x, long long& n){
	if(n==0)return;
 
	if(a-n >= x){
		a=a-n;
		n=0;
	}
	else{
		n=n-(a-x);
		a=x;
	}
}
 
int main(){
	int casos;
	cin>>casos;
 
	for (int i = 0; i < casos; ++i){
		long long a,b,x,y,n;
		cin>> a >> b >> x >> y >> n;
 
		long long posible_a= max(a-n, x);
		long long posible_b= max(b-n, y);
		
		if(posible_a<= posible_b){
			reduce(a, x, n);
			reduce(b, y, n);
		}
		else{
			reduce(b, y, n);
			reduce(a, x, n);
		}
 
		cout<<a*b<<endl;
	}
	return 0;
}
