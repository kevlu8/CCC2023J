#include <bits/stdc++.h>
using namespace std;

int n, m;

int main() {
	cin >> n >> m;

	cout << (n * 50) - (m * 10) + (n > m ? 500 : 0) << '\n';
	return 0;
}
