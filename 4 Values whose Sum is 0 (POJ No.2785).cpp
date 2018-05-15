#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    //get number
    int n;
    int A[MAX_N], B[MAX_N], C[MAX_N], D[MAX_N];
    
    int CD[MAX_N * MAX_M];
    
    // list all pair of C & D
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            CD[j * n + k] = C[j] + D[j];
        }
    }
    sort(CD, CD + n * n);
    
    long long res = 0;
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            int cd = -(A[j] + B[k]);
            // take numbers from C & D sum to cd;
            res += upper_bound(CD, CD + n * n, cd) - lower_bound(CD, CD + n * n, cd );
        }
    }
    
    cout << "Hello, Wandbox!" << endl;
}


