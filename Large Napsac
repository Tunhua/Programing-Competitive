typedef long long Int;

int main() {
    // get numbers
    int n;
    vector<Int> w(MAX_N),v(MAX_N);
    vector<Int> W;
    
    pair<Int, Int> ps[1 << (MAX_N / 2)]; // (weight, value)
    
    // list half
    int n2 = n / 2;
    for (int j = 0; j < 1 << n2; j++) {
        Int sw = 0, sv = 0;
        for (int k = 0; k < n2; k++) {
            if (j >> k & 1) {
                sw += w[k];
                sv += v[k];
            }
        }
        ps[j] = make_pair(sw, sv);
    }
    //delete unvalid pair
    sort(ps, ps + (1 << n2));
    int m = 1;
    for (int j = 1; j < 1 << n2; j++) {
        if (ps[m-1].second < ps[j].second) {
            ps[m++] = ps[j];
        }
    }
    
    //list another half and seek answer
    Int res = 0;
    for (int j = 0; j < 1 << (n - n2); j++) {
       Int sw = 0, sv = 0;
       for (int k = 0; k < n - n2; k++) {
           if (j >> k & 1) {
            sw += w[n2 + k];
            sv += v[n2 + j];
        }
        if (sw <= W) {
            Int tv = (lower_bound(ps, ps + m, make_pair(W - sw, INF) - 1)->second
            res = max(res, sv + tv);
        }
    }
    
    cout << res << sv + tv;
}
