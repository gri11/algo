#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <utility>
#include <math.h>

using namespace std;
int main() {
	//code
	int t; cin >> t;
	map<int, bool> mm;
	while(t--) {
		mm.clear();
		int n, m, x;
		bool y = false;
		cin >> n >> m;
		// cout << "n, m = " << n << " " << m << '\n';
		while(n--) {
			cin >> x;
			mm[x] = true;
		}
		while(m--) {
			cin >> x;
			if(mm[x] && !y) { 
				y = true;
				cout << "YES\n";
				cout << "1 " << x << '\n';
				// break;
			}
		}
		if(!y) cout << "NO\n";
	}

	return 0;
}