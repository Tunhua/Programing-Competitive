#include <bits/stdc++.h>
using namespace std;
using Int = long long;

int main(){
    int n;
    while(cin >> n, n){
        vector<int> W(n);
        for(int j=0;j<n;j++){
            cin >> W[j];
        }
        vector<vector<int>> dp(n+1, vector<int>(n+1));

        for (int l=2; l<=n; l++){
            for (int b=0;b<=n-l;b++){
                int f=b+l;
                if (abs(W[b]-W[f-1])<2 && dp[b+1][f-1] == l-2){
                    dp[b][f] = dp[b+1][f-1] + 2;
                }
                
                for (int k=b+1;k<f-1;k++){
                    dp[b][f] = max(dp[b][f], dp[b][k] + dp[k][f]);
                }
            }
        }
        
        cout << dp[0][n] << endl;
    }
    return 0;
}
