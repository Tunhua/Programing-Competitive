const int MAX_N = 1 << 17;

// global vector which has segment tree
int n
vector<int> dat(2 * MAX_N - 1);

// initialize
void init(int n_) {
    // for ease make the number of contents　2^x
    n = 1;
    while (n < n_) n *= 2;
    
    // set all values INT_MAX
    for (int j = 0; j < 2 * n - 1; j++) dat[j] = INT_MAX;
}

// change kth value(0-indexed) to a
void update(int k, int a) {
    // node of leaf
    k += n - 1;
    dat[k] = a;
    // update while climing
    while (k > 0) {
        k = (k - 1) / 2;
        dat[k] = min(dat[k * 2 + 1], dat[k * 2 + 2]);
    }
}

// seek min [a, b]
// back hikisuu is hikisuu for ease of computing
// k is the number of node, l, r show the node is [l, r]
// so called query(a, b, 0, 0, n)
int query(int a, int b, int k, int l, int r) {
    
    // if [a,b] and [l, r] not connected INT_MAX
    if (r <=a || b <= l) return INT_MAX;
    
    // [if [a,b] contain [l, r] the value of this node
    if ( a <= l && r <= b) return dat[k];
    else {
        // else min of two child value
        int vl = query(a, b, k * 2 + 1, l, (l + r) / 2);
        int vr = query(a, b, k * 2 + 2, (l + r) / 2, r);
        return min(vl, vr);
    }
}
