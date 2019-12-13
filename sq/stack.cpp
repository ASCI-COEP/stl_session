#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> s;
    queue<int> q;
    int n, i, temp;

    cin >> n;
    for(i = 0; i < n; i++) {
    	cin >> temp;
    	s.push(temp);
    	q.push(temp);
    }

    cout << "STACK SIZE: " << s.size() << endl;
    cout << "STACK :";
    while(s.size()) {
    	cout << s.top() << " ";
    	s.pop();
    }
    cout << endl;

    cout << "QUEUE SIZE: " << q.size() << endl;
    cout << "QUEUE: "; 
    while(!q.empty()) {
    	cout << q.front() << " ";
    	q.pop();
    }
    cout << endl;
    
	return 0;
}