#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n, t;
	cin>> t;
	for (int j = 0; j<t; ++j){
		int total=0;
		cin>> n;
		string s;
		cin>> s;
 		vector<int> nums(n);
 		queue<int> cero;
 		queue<int> uno;
 		for (int i = 0; i<n; ++i){
 			if(s[i]=='0'){

 				if(!uno.empty()){
 					nums[i]=uno.front();
 					uno.pop();
 					cero.push(nums[i]);
 				}
 				else{
 					total++;
 					nums[i]=total;
 					cero.push(total);
 				}
 			}
 			else{
 				if(!cero.empty()){
 					nums[i]=cero.front();
 					cero.pop();
 					uno.push(nums[i]);
 				}
 				else{
 					total++;
 					nums[i]=total;
 					uno.push(total);
 				}
 			}
 		}
 		
 		cout<<total<<endl;
 		for (int i = 0; i<n; ++i){
 			cout<<nums[i]<<' ';
 		}
 		cout<<endl;
 	}
}
