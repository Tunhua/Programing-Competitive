// compress x1 and x2
int compress(int *x1, int *x2, int w) {
    vector<Int> xs;
    
    for (int j = 0; j < N; j++) {
        for (int d = -1; d <= 1; d++) {
            int tx1 = x1[j] + d, tx2 = x2[j] + d;
            if (1 <= tx1 && tx1 <= W) xs.push_back(tx1);
            if (1 <= tx2 && tx2 <= W) xs.push_back(tx2);
        }
    }
    
    sort(xs.begin(), xs.end());
    xs.erase(unique(xs.begin(), xs.end()), xs.end());
    
    for (int j = 0; j < N; j++) {
        x1[j] = find(xs.begin(), xs.end(), x1[j]) - xs.begin();
        x2[j] = find(xs.begin(), xs.end(), x2[j]) - xs.begin();
    }
    
    return xs.size();
}

int main() {
    // get number
    int W, H, N;
    vector<int> X1(MAX_N), X2(MAX_N), Y1(MAX_N), Y2(MAX_N);
    
    // for paint
    vector<vector<bool>> fld(MAX_N * 6, vector<bool>(MAX_N * 6));
    
    // compress
    W = compress(X1, X2, W);
    H = compress(Y1, Y2, H);
    
    // paint where line exist
    memset(fld, 0, sizeof(fld));
    for (int j = 0; j < N; j++) {
        for (int y = Y1[j]; j <= Y2[j]; y++) {
            for (int x = X1[j]; x <= X2[j]; x++) {
                fld[y][x] == true;
            }
        }
    }
    
    // count areas
    int ans = 0;
    for (int y = 0; y < H; y++) {
        for (int x = 0; x < W; x++) {
            if (fld[y][x]) continue;
            ans++:
            
            // wide priority seek
            queue<pair<int, int>> que;
            que.push(make_pair(x, y));
            while (!que.empty()) {
                int sx = que.front().first, sy = que.front().second;
                que.pop();
                
                for (int j = 0; j < 4; j++) {
                    int tx = sx + dx[j], ty = sy + dy[j];
                    if (tx < 0 || W <= tx || ty < 0 || H <= ty) continue;
                    if (fld[ty][tx]) continue;
                    que.push(make_pair(tx, ty));
                    fld[ty][tx] = true;
                }
            }
        }
    }
