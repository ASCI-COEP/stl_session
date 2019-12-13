#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;

bool comparator(int a, int b) {
	return a > b;
}

bool newcomp(pair<int, pair<int, int> > a, pair<int, pair<int, int> > b) {
	if(a.first == b.first) {
		if(a.second.first == b.second.first)
			return a.second.second > b.second.second;
		return a.second.first > b.second.first;
	}
	return a.first > b.first;
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n, i, temp;
	priority_queue<int> pq;
	priority_queue<int, vector<int>, greater<int> > mpq;

	cin >> n;
	for(i = 0; i < n; i++) {
		cin >> temp;
		pq.push(temp);
		mpq.push(temp);
	}

	cout << "MAX PQ: ";
	while(pq.size() > 0) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;

	cout << "MIN PQ: ";
	while(mpq.size() > 0) {
		cout << mpq.top() << " ";
		mpq.pop();
	}
	cout << endl;

	priority_queue<pair<int, pair<int, int> >, vector<pair<int, pair<int, int> > >, function<bool(pair<int, pair<int, int> >, pair<int, pair<int, int> >) > > vpq(newcomp);
	vpq.push(mp(3, mp(1, 2)));
	vpq.push(mp(1, mp(1, 3)));
	vpq.push(mp(1, mp(2, 3)));

	while(vpq.size()) {
		pair<int, pair<int, int> > ppi = vpq.top();
		vpq.pop();
		cout << "WEIGHT: " << ppi.first << " EDGE: " << ppi.second.first << " " << ppi.second.second << endl;
	}

	return 0;
}