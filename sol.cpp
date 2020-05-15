#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k, i = 0;
	cin >> n >> k;
	int x;
	while(i < k){
		cin >> x;
		if(x == 0){
			cout << i << "\n";
			exit(1);
		}
		i++;
	}
	int y;
	i = k;
	while(i < n){
		cin >> y;
		if(y != x){
			cout << i << "\n";
			exit(1);
		}
		i++;
	}
	cout << n << "\n";
	return 0;
}