#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[]) {

	int n, i;
	map<int, int> mpp;    
    
	cin >> n;
	int arr[n] = { 0 };
    for(i = 0; i < n; i++) {
    	cin >> arr[i];
    	if(mpp.find(arr[i]) != mpp.end())
    		cout << "NOT FOUND " << arr[i];
    	mpp[arr[i]] += 1;
    }
    cout << "PRINTING ARRAY FREQ: " << endl;
    for(i = 0; i < n; i++) {
    	cout << arr[i] << ": " << mpp[arr[i]] << endl;
    }

    cout << "PRINTING MAP:" << endl;
    for(auto it = mpp.begin(); it != mpp.end(); it++)
    	cout << it -> first << ": " << it -> second << endl;

    map<int, vector<pair<int, int> > > vmpp;
    vector<pair<int, int> > v;
    v.push_back(make_pair(1, 2));
    vmpp[10] = v;

    cout << "PRINTING VECTOR MAP: " << endl;
    for(auto it = vmpp.begin(); it != vmpp.end(); it++)
    	cout << it ->  first << ": " << (it -> second)[0].first << " " << (it -> second)[0].second << endl;

    cout << vmpp[10][0].first << " " << vmpp[10][0].second << endl;
	return 0;
}