#include <iostream>

#include <algorithm>

using namespace std;


int main() {

	int N;

	int a[100];

	cin >> N;

	for (int i = 0; i <= N-1; i++) cin >> a[i];

	
	sort(a, a + N, greater<int>());

	int Alice = 0;

	int Bob = 0;

	for (int i = 0; i <= N-1; ++i) {

		if (i % 2 == 0) {

			Alice += a[i];

		}

		else {

			Bob += a[i];

		}

	}

	cout << Alice - Bob << endl;

}
