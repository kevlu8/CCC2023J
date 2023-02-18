#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> a;
int occs[5];

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		a.push_back(s);
	}

	int maxocc = -1;
	for (int i = 0; i < 5; i++) {
		int numocc = 0;
		for (int j = 0; j < n; j++) {
			if (a[j][i] == 'Y') numocc++;
		}
		maxocc = max(maxocc, numocc);
		occs[i] = numocc;
	}
	vector<int> ans;
	for (int i = 0; i < 5; i++) {
		if (occs[i] == maxocc) ans.push_back(i + 1);
	}

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i];
		if (i != ans.size() - 1) cout << ",";
	}
	cout << '\n';
	return 0;
}
