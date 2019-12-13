#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
	int n, temp, i;
	cin >> n;
	vector<int> v1, v2(n), v3(n, 0);
	for(i = 0; i < n; i++)
		cin >> v2[i];
	cout << "V2 SIZE: " << v2.size() << endl;
	cout << "V1 SIZE: " << v1.size() << endl; 
	for(i = 0; i < n; i++) {
		v1.push_back(v2[i]);
	}

	cout << "Printing V1: ";
	for(i = 0; i < n; i++)
		cout << v1[i] << " ";
	cout << endl;

	vector<int> v4;
	sort(v1.begin(), v1.end(), greater<int>());
	cout << "SORTED: ";
	for(auto it = v1.begin(); it != v1.end(); it++)
		cout << *it << " ";
	cout << endl;


	return 0;
}