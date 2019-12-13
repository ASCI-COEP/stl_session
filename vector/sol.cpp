#include <bits/stdc++.h>
using namespace std;

long pthFactor(long n, long p) {
	long long nsqrt = 0, i;
	vector<long long> v;
	for(i = 1; (i * i) <= n; i++) {
		if(n % i == 0) {
			v.push_back(i);
			if(i != n/i)
				v.push_back(n / i);
		}
	}
	if(v.size() < p)
		return 0;
	sort(v.begin(), v.end());
	return v[p - 1];
}

int main(int argc, char const *argv[]) {
	long long n, nsqrt = 0;
	cin >> n;
	long long p;
	cin >> p;
	cout << pthFactor(n, p) << endl;
}
