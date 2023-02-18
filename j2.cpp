#include <bits/stdc++.h>
using namespace std;

int n, ans=0;

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "Poblano") ans += 1500;
		else if (s == "Mirasol") ans += 6000;
		else if (s == "Serrano") ans += 15500;
		else if (s == "Cayenne") ans += 40000;
		else if (s == "Thai") ans += 75000;
		else ans += 125000;
	}

	cout << ans << '\n';
	return 0;
}
