#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <utility>
#include <math.h>

using namespace std;

int main() {
	//code
	int n, m;
	cin >> n >> m;
	int ans = 0;
	for(int a = 0; a <= m; a++) {
		for(int b = 0; b <= n; b++) {
			if(pow(a, 2) + b == n && a + pow(b, 2) == m) ans++;
		}
	}
	cout << ans << '\n';

	return 0;
}