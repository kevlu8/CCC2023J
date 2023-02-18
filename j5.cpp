#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

int n, m, ans=0;
string s;
vector<string> a;

void dfs(int d, int x, int y, int dx, int dy, bool turned=false) {
	if (x < 0 || x >= n || y < 0 || y >= m) return;
	if (a[x][y] != s[d]) return;
	if (d == s.size() - 1) {
		ans++;
		return;
	}

	dfs(d + 1, x + dx, y + dy, dx, dy, turned);
	if (!turned && d >= 1) {
		dfs(d + 1, x - dy, y + dx, -dy, dx, true);
		dfs(d + 1, x + dy, y - dx, dy, -dx, true);
	}
}

int main() {
	cin >> s >> n >> m;

	for (int i = 0; i < n; i++) {
		string s2 = "";
		for (int j = 0; j < m; j++) {
			char c;
			cin >> c;
			s2 += c;
		}
		a.push_back(s2);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == s[0]) {
				dfs(0, i, j, -1, -1);
				dfs(0, i, j, -1, 0);
				dfs(0, i, j, -1, 1);
				dfs(0, i, j, 0, -1);
				dfs(0, i, j, 0, 1);
				dfs(0, i, j, 1, -1);
				dfs(0, i, j, 1, 0);
				dfs(0, i, j, 1, 1);
			}
		}
	}


	cout << ans << '\n';
	return 0;
}
