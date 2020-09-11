#include<bits/stdc++.h>
using namespace std;
#include <iostream>
 
int main(){
	int n;
	cin>>n;
	vector <int> v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
		int l=0, r=n-1, last=-1;
		string ans="";
		while(l<=r){
			vector <pair<int, char>> pos;
			pos.push_back(make_pair(v[l], 'L'));
			pos.push_back(make_pair(v[r], 'R'));
			sort(pos.begin(),pos.end());
			int index=-1;
			for(int i=0; i<2; i++){
				if(pos[i].first > last){
					index=i;
					break;
				}
			}
			if(index== -1){
				break;
			}
			if(pos[index].second == 'L'){
				l++;
				ans+="L";
			}
			else{
				r--;
				ans+="R";
			}
			last= pos[index].first;
		}
		cout<<ans.size()<<endl;
		cout<<ans<<endl;
	
}
