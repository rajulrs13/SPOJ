// Rajul Saxena
// rajulrs13@gmail.com
#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#define MAXSIZE 4 * 50010
using namespace std;

struct node {
    int sum;
    int prefixsum;
    int suffixsum;
    int maxsum;
};

node sgt[MAXSIZE];
int arr[50010];

node myQuery(int be, int en, int f, int l, int ind) {
    node res;
    res.prefixsum = res.suffixsum = res.sum = res.maxsum = INT_MIN;

    if (be > l || en < f) {
        return res;
    }
    if (be >= f && en <= l) {
        return sgt[ind];
    }

    int mid = (be + en) / 2;
    if (f > mid) {
        return myQuery(mid + 1, en, f, l, 2 * ind + 2);
    }
    if (l <= mid) {
        return myQuery(be, mid, f, l, 2 * ind + 1);
    }

    node left = myQuery(be, mid, f, l, 2 * ind + 1);
    node right = myQuery(mid + 1, en, f, l, 2 * ind + 2);

    res.sum = left.sum + right.sum;
    
    res.prefixsum = max(left.prefixsum, left.sum + right.prefixsum);
    
    res.suffixsum = max(right.suffixsum, left.suffixsum + right.sum);

    res.maxsum =
        max(res.prefixsum,
            max(res.suffixsum,
                max(left.maxsum,
                    max(right.maxsum, left.suffixsum + right.prefixsum))));

    return res;
}

void makeSegTree(int be, int en, int ind) {
    if (be == en) {
        sgt[ind].sum = arr[be];
        sgt[ind].prefixsum = arr[be];
        sgt[ind].suffixsum = arr[be];
        sgt[ind].maxsum = arr[be];

    } else {
        int mid = (be + en) / 2;

        makeSegTree(be, mid, 2 * ind + 1);
        makeSegTree(mid + 1, en, 2 * ind + 2);

        node left = sgt[2 * ind + 1];
        node right = sgt[2 * ind + 2];

        sgt[ind].sum = left.sum + right.sum;

        sgt[ind].prefixsum = max(left.prefixsum, left.sum + right.prefixsum);

        sgt[ind].suffixsum = max(right.suffixsum, left.suffixsum + right.sum);
        
        sgt[ind].maxsum =
            max(sgt[ind].prefixsum,
                max(sgt[ind].suffixsum,
                    max(left.maxsum,
                        max(right.maxsum, left.suffixsum + right.prefixsum))));
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    makeSegTree(0, n - 1, 0);
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int f;
        cin >> f;
        int l;
        cin >> l;
        cout << myQuery(0, n - 1, f - 1, l - 1, 0).maxsum << endl;
    }
    return 0;
}