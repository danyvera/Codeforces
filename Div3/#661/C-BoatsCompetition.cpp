#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin >> t;
	for (int i=t; i>0; i--){
		int n;
		cin >> n;
		vector<int> vector1(n + 1);
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			vector1[x]++;
		}
		int ans = 0;
		for (int s = 2; s <= 2 * n; ++s) {
			int contador = 0;
			int aux= (s + 1) / 2;
			for (int i = 1; i < aux; ++i) {
				if (s-i > n){
					continue;
				} 
				contador += min(vector1[i], vector1[s - i]);
			}
			if (s % 2 == 0) {
				int aux2=s/2;
				contador += vector1[aux] / 2;
			}
			ans = max(ans, contador);
		}
		cout << ans << endl;
	}
}
