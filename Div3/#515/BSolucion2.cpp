#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 
typedef pair<int,int> heater;
const int INF = (1 << 30);
 
int main(){
	int initialPosition;
 
	int n, r;
	cin >> n >> r;
	vector<heater> heaters;
	int currentX = 0, currentY;
	for(int i = 1; i <= n; ++i){
		int currentHeater;
		cin >> currentHeater; 
		if(currentHeater == 1){
			int x = max(i - r + 1, 1);
			int y = min(i + r - 1, n);
			heaters.push_back(heater(x, y));
 
			if(x == 1){
				currentX = x;
				currentY = y;
				initialPosition = heaters.size();
			}
		}
	}
 
	heaters.push_back(heater(n + 1, n + 1));
 
	int heaterUsed = 1;
	if(currentX == 1){
		priority_queue<int> heap;
		for(int i = initialPosition; i < heaters.size(); ++i){
			if(currentY + 1 < heaters[i].first){
				if(!heap.empty() && 
						heap.top() + 1 >= heaters[i].first && 
						heap.top() != currentY){
					currentY = heap.top();
					++heaterUsed;
				} else {
					break;
				}
			}
			heap.push(heaters[i].second);
		}
	}
 
	if(currentY == n){
		cout << heaterUsed << "\n";
	} else {
		cout << "-1\n";
	}
	return 0;
}
