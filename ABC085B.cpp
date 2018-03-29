#include <iostream>

using namespace std;


int main() {

	int N;

	int d[100];

	cin >> N;

	for (int i = 0; i <= N-1; ++i) cin >> d[i];


	int num[100] = {0};

	for (int i = 0; i <= N-1; ++i) {

		num[d[i]]++;

	}

	int res = 0;

	for (int i = 1; i <= 100; ++i) {

		if (num[i]) {

			++res;

		}

	}

	cout << res << endl;

}



