#include "bits/stdc++.h"

using namespace std;
using Int = long long;
const double pi = acos(-1);
#define FOR(i,a,b) for (Int i=(a),__last_##i=(b);i<__last_##i;i++)
#define RFOR(i,a,b) for (Int i=(b)-1,__last_##i=(a);i>=__last_##i;i--)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define __GET_MACRO3(_1, _2, _3, NAME, ...) NAME
#define rep(...) __GET_MACRO3(__VA_ARGS__, FOR, REP)(__VA_ARGS__)
#define rrep(...) __GET_MACRO3(__VA_ARGS__, RFOR, RREP)(__VA_ARGS__)
template<typename T> ostream& operator<<(ostream& os, const vector<T>& v) {
	REP(i, v.size()) { if (i)os << " "; os << v[i]; }return os;
}
template<typename T> ostream& operator<<(ostream& os, const vector<vector<T>>& v) {
	REP(i, v.size()) { if (i)os << endl; os << v[i]; }return os;
}

const Int INF = 1LL << 60;
Int MOD = 1000000007;
Int _MOD = 1000000009;
double EPS = 1e-10;

int main() {
    Int n;
    
    while (true) {
        cin >> n;
        
        if (n == 0) {
            break;
        }
        
        Int x = 1000 - n;
        Int ans = 0;
        
        ans += x/500;
        x = x%500;
        ans += x/100;
        x = x%100;
        ans += x/50;
        x = x%50;
        ans += x/5;
        x = x%5;
        ans += x;
         
        cout << ans << endl;
    }
    
    return 0;
}
