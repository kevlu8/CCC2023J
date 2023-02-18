#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

int n, ans=0;
vector<int> a, b;

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		int c;
		cin >> c;
		a.push_back(c);
		if (c == 1) ans += 3;
		if (i != 0 && a[i - 1] && a[i]) ans -= 2;
	}
	for (int i = 0; i < n; i++) {
		int c;
		cin >> c;
		b.push_back(c);
		if (c == 1) ans += 3;
		if (i != 0 && b[i - 1] && b[i]) ans -= 2;
		if (i % 2 == 0 && a[i] && b[i]) ans -= 2;
	}


	cout << ans << '\n';
	return 0;
}
