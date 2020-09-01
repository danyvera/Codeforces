#include<bits/stdc++.h>
using namespace std;
#include <iostream>

int main(){
	string s;
	int n;
	vector<char> m(10);
	cin>>n>>s;
	char value;
	for(int i=0; i<10; i++){
		cin>>value;
		m[i+1]=value;
	}
	for(int i=0; i<s.size(); i++){
		if(m[s[i]-'0']>s[i]){
			while(i<s.size() && m[s[i]-'0'] >= s[i]){
				s[i]=m[s[i]-'0'];
				i++;
			}
			break;
		}
	}
	cout<<s<<endl;
	return 0;
}
