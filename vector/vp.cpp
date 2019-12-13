#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back

bool comparator(pair<int, int> a, pair<int, int> b) {
	if(a.second == b.second)
		return a.first > b.first;
	return a.second > b.second;
	// return true;
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	vector<pair<int, int> > v;
	int n, i, x, y;

	cin >> n;
	for(i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end());

	cout << "AFTER SORTING: " << endl;
	for(i = 0; i < n; i++)
		cout << v[i].first << " " << v[i].second << endl;

	sort(v.begin(), v.end(), comparator);
	cout << "AFTER COMPARATOR SORTING: " << endl;
	for(i = 0; i < n; i++)
		cout << v[i].first << " " << v[i].second << endl;

	vector<pair<int, string> > v1;
	v1.push_back(make_pair(2, "helloo world"));
	cout << v1[0].first << " " << v1[0].second << endl; 

	vector<vector<int> > v2(n);
	int j;
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			v2[i].push_back(10);
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++)
			cout << v2[i][j] << " ";
		cout << endl;
	}
	return 0;
}
