#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    
    pair<int, int> a, b;
    
    a = make_pair(2, 3);
    cout << "A: " << endl;
    cout << "FIRST: " << a.first << " SECOND: " << a.second << endl;

    b = pair<int, int>(3, 4);
    cout << "B: " << endl;
    cout << "FIRST: " << b.first << " SECOND: " << b.second << endl;

	return 0;
}