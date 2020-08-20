#include<bits/stdc++.h>
using namespace std;
const int MAX=1000000002;
 
int main(){
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n), b(n);
		long long int minA=MAX, minB=MAX;
 
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			if (a[i]< minA){
          		minA=a[i];
       		}
		}
		for (int i = 0; i < n; ++i) {
			cin >> b[i];
			if (b[i]< minB){
          		minB=b[i];
       		}
		}
 
 
		long long int ans = 0;
		for (int i = 0; i < n; ++i) {
			ans += max(a[i] - minA, b[i] - minB);
		}
		cout << ans << endl;
	}
 
}
