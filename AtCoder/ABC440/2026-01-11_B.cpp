#include <bits/stdc++.h>

using namespace std;

int main() {
	int n = 0;
	cin >> n;

	vector <pair<int,int>> v;
	int t = 0;
	for (int i = 1; i <= n; i++) {
		cin >> t;
		v.push_back({t,i});
	}

	sort(v.begin(), v.end());
	//note: when sorting a pair, you will sort the first element,
	//so if the first element is an index, it will just sort and index
	//leading to a wrong answer
	
	cout << v[0].second << " " << v[1].second << " " << v[2].second << endl;
}
