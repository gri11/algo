#include <iostream>
#include <string>

using namespace std;

int main() {
	int n; cin >> n;
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		if(x % 7 != 0) {
			int lb = x/7*7;
			int ub = (x/7+1)*7;
			string lbs = to_string(lb);
			string ubs = to_string(ub);
			int lbc = 0;
			int ubc = 0;
			for(int i = 0; i < lbs.length(); i++){
				if(lbs[i] != to_string(x)[i]) lbc++;
				if(ubs[i] != to_string(x)[i]) ubc++;
			}
			if(lbc <= ubc) x = stoi(lbs);
			else x = stoi(ubs);
		}
		cout << x << '\n';
	}
}