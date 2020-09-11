#include<bits/stdc++.h>
using namespace std;
#include <iostream>
 
int main(){
	int q, index, left, right, l=0, r=0, BooksToMove;
	cin>>q;
	char c;
	vector<pair<char, int>> pos(200000, make_pair('L',0));
	while(q--){
		cin>>c>>index;
		if(c=='L'){
			pos[index].first=c;
			pos[index].second=l;
			l++;
		}
		else if(c=='R'){
			pos[index].first=c;
			pos[index].second=r;
			r++;
		}
		else{
			if(pos[index].first == 'L'){
				left=l- pos[index].second-1;
				right= pos[index].second + r;
			}
			else{
				right=r-pos[index].second -1;
				left= pos[index].second +l;
			}
			BooksToMove=min(left, right);
			cout<<BooksToMove<<endl;
		}
	}
	
	return 0;
}
