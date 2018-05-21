#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define INF (1<<30)
#define INFLL (1ll<<60)
typedef pair<int, int> P;
typedef pair<ll, P> E;
#define MOD (1000000007ll)
#define l_ength size
#define PI 3.14159265358979

void mul_mod(ll& a, ll b){
	a *= b;
	a %= MOD;
}

void add_mod(ll& a, ll b){
	b += MOD;
	a += b;
	a %= MOD;
}

int w[334],dp[334][334];
bool done[334][334],memo[334][334],fini[334][334];

bool search(int j, int k) {
    int l;
    if(done[j][k]){
        return memo[j][k];
    }
    done[j][k] = true;
    if(j == k){
        memo[j][k] = false;
        return memo[j][k];
    }
    if((k-j)==1){
        memo[j][k] = (abs(w[j] - w[k])<=1);
        return memo[j][k];
    }
    if(abs(w[j]-w[k])<=1 && search(j+1,k-1)){
        memo[j][k] = true;
        return memo[j][k];
    }
    memo[j][k] = false;
    for(l=j;l<k;++l){
        if(search(j,l) && search(l+1,k)){
            memo[j][k] = true;
            break;
        }
    }
    return memo[j][k];
}

int solve(int j, int k){
    int k;
    if(fini[j][k]){
        return dp[j][k];
    }
    fini[j][k] = true;
    if(search(j,k)){
        dp[j][k] = (k-j+1);
        return dp[j][k];
    }else if(j == k){
        dp[j][k] = 0;
        return dp[j][k];
    }
    dp[j][k] = 0;
    for(l=j;l<k;++l){
        dp[j][k] = max(dp[j][k], solve(j,l)+solve(j+1,k));
    }
    return dp[j][k];
}

int main(void){
    int n,j,k;
    cin >> n;
    while(n){
        fill(done[0],done[334],false);
        fill(fini[0],fini[334],false);
        for(j=0;j<n;++j){
            cin >> w[j];
        }
        for(j=0;j<n;++j){
            for(k=1;k<n;++k){
                search(j,k);
            }
        }
        cout << (solve(0,n-1)) << endl;
    }
    return 0;
}
        
