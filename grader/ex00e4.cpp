#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <utility>
#include <math.h>

using namespace std;

void combi_exact(int n, int k, vector<bool> &sol, int len, int chosen) {
  if(len < n) {
    if (len - chosen < n-k) {
      sol[len] = 0;
      combi_exact(n,k,sol,len+1,chosen);
    }
    if (chosen < k) {
      sol[len] = 1;
      combi_exact(n,k,sol,len+1,chosen+1);
    }
  } else {
    // for(auto x : sol) cout << x;
    for(int i = 0; i < n; i++) cout << sol[i];
    cout << endl;
  }
  
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0);
  //code
  int a, b;
  cin >> a >> b;
  vector<bool> sol(b);
  combi_exact(b, a, sol, 0, 0);

  return 0;
}