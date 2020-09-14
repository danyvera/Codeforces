#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
 
int main(){
	int t;
	cin>>t;
	for(int z=0; z<t; z++){
		int n, x, y;
		cin>> n>> x>> y;
		bool flag=false;
 
		for(int i=1; i<=50; i++){
			for(int j=1; j<=50; j++){
				int numerosXyY=0;
				vector<int> numerosTomados;
				for(int k=j; numerosTomados.size()<n; k+=i){
					if(k==x || k==y){
						numerosXyY++;
					}
					numerosTomados.push_back(k);
				}
				if(numerosXyY==2){
					for(int k=0; k<n; k++){
						cout<<numerosTomados[k]<<" ";
					}
					cout<<endl;
					flag= true;
				}
				if(flag){
					break;
				}
			}
			if(flag){
				break;
			}
		}
	}
	return 0;
}
