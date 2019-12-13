#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;

int main(int argc, char const *argv[]) {
	int n, i;
	char temp;
	set<char> s;
	
	cin >> n;
	for(i = 0; i < n; i++) {
		cin >> temp;
		s.insert(temp);
	}
	for(auto it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
	cout << endl;
    

    auto it = s.find('c');
    if(it != s.end())
    	cout << "c FOUND! " << *it << endl;
    else
    	cout << "c NOT FOUND! " << endl;
    
	return 0;
}








