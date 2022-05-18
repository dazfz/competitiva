#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  scanf("%d\n\n", &n);
  while(n--) {
		map<string, int> mp;
		string line;
		int total = 0;
		while(getline(cin, line) && line != "") {
			mp[line]++;
			total++;
		}
		for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++)
			cout << (*it).first << " " << fixed << setprecision(4) << (double)(*it).second*100/total << endl;
		if(n) cout << "" << '\n';
	}
	return 0;
}
