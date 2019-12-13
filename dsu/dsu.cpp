#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;

void initialize(int *arr, int n) {
	int i = 0;
	for(i = 0; i < n; i++)
		arr[i] = i;
}

int root(int *arr, int no) {
	while(no != arr[no]) {
		arr[no] = arr[arr[no]];
		no = arr[no];
	}
	return no;
}

bool find(int *arr, int a, int b) {
	return root(arr, a) == root(arr, b);
}

void uunion(int *arr, int a, int b) {
	int aroot = root(arr, a), broot = root(arr, b);
	arr[broot] = arr[aroot];
}


int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i;
    cin >> n;
    int arr[n] = { 0 };
    initialize(arr, n);

    for(i = 0; i < n; i++) {
    	uunion(arr, 0, i);
    }

    for(i = 0; i < n - 1; i++) {
    	cout << i << " " << i + 1 << ": " << find(arr, i, i + 1) << endl;
    }

    cout << "ROOT: " << endl;
    for(i = 0; i < n; i++) {
    	cout << i << ": " << root(arr, i) << endl;
    }

	return 0;
}