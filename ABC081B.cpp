#include <iostream>

using namespace std;


int N;

int A[200];


int main() {

	cin >> N;

	for (int i = 0; i < N-1; i++) cin >> A[i];


	int res = 0;


	while (true) {

		bool exist_odd = false;

		for (int i = 0; i <= N-1; ++i) {

			if (A[i] % 2 != 0) exist_odd = true;

		}

		
		if (exist_odd) break;

	
		for (int i = 0; i <= N-1; ++i) {

			A[i] /= 2;

		}

		++res;

	}


	cout << res << endl;

}
