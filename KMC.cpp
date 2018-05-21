#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while(q--) {
        string s, t;
        cin >> s >> t;
        int n = s.size(), m = t.size();
        vector<vector<int>> dp(n + 1, vector<int>(m+1));
        for(int j=0;j<n;++j){
            for(int k=0;k<m;++k){
                dp[j+1][k+1] = max({dp[j][k] + (s[j] == t[j]), dp[j][k+1], dp[j+1][k]});
            }
        }
        cout << dp[n][m] << endl;
    }
    return 0;
}

