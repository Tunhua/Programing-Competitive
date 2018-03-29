#include <iostream>

#include <string>

using namespace std;



	int M, N;

	string A[100];

	string B[100];

	
	int main() {

		cin >> N;

		for (int a = 0; a <= N-1; ++a) cin >> A[a];

		cin >> M;

		for (int b = 0; b <= M-1; ++b) cin >> B[b];
                

		int max = 0;	
	
		for (int i = 0; i <= N-1; ++i) {
		
	                int res = 1;	

			for(int j = 1; j <= N-i-1; ++j) {
				
				if( A[i] == A[i+j] ) ++res;
				
				}
			
			for (int k = 0; k <= M-1; ++k) {
				
				if ( A[i] == B[k] ) --res;
			
			}
		
			if (res >= max) max = res;
		}
		
		cout << max << endl;

}
			
