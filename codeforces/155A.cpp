// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
	int n, mn, mx;
	int amz = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int score;
		cin >> score;
		if(i == 0) {
			mn = score;
			mx = score;
			continue;
		}
		if(score > mx) { mx = score; amz++; }
		if(score < mn) { mn = score; amz++; }
	}

	cout << amz << '\n';

	return 0;
}
