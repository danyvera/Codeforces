#include<bits/stdc++.h>
using namespace std;
#include <iostream>
 
int main(){
	int t;
	cin>>t;
	long long int L,v, l, r, LinternasVisibles;
 
	for (int i = 0; i < t; ++i){
		cin>>L>> v >> l >> r;
		LinternasVisibles=L/v;
		LinternasVisibles-=r/v;
		LinternasVisibles+= (l-1)/v;
 
		cout<<LinternasVisibles<<endl;
	}
	return 0;
}
