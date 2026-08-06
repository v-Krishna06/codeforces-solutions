#include <bits/stdc++.h>
using namespace std;
 
static const int MAXNM = 1000006;
static int aArr[MAXNM];
static long long treeSum[MAXNM];
static int treeCnt[MAXNM];
static int allValsBuf[MAXNM];
 
int main(){
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
 
        vector<long long> v(n + 1);
        for (int i = 1; i <= n; i++) scanf("%lld", &v[i]);
 
        long long total = (long long)n * (long long)m;
        for (long long idx = 0; idx < total; idx++) {
            scanf("%d", &aArr[idx]);
        }
 
        // ---- coordinate compression (descending order) ----
        for (long long idx = 0; idx < total; idx++) allValsBuf[idx] = aArr[idx];
        sort(allValsBuf, allValsBuf + total, greater<int>());
        int D = (int)(unique(allValsBuf, allValsBuf + total) - allValsBuf);
 
        fill(treeSum, treeSum + D + 1, 0LL);
        fill(treeCnt, treeCnt + D + 1, 0);
 
        int LOG = 0;
        while ((1 << (LOG + 1)) <= D) LOG++;
 
        auto getIndex = [&](int val) -> int {
            // allValsBuf sorted descending, find 1-based index where value == val
            int lo = 0, hi = D - 1;
            while (lo < hi) {
                int mid = (lo + hi) / 2;
                if (allValsBuf[mid] > val) lo = mid + 1; else hi = mid;
            }
            return lo + 1;
        };
 
        long long totalSum = 0;
        long long best = LLONG_MAX;
 
        for (int k = n; k >= 1; k--) {
            long long rowStart = (long long)(k - 1) * m;
            for (int j = 0; j < m; j++) {
                int val = aArr[rowStart + j];
                int idx = getIndex(val);
                for (int i = idx; i <= D; i += i & (-i)) {
                    treeSum[i] += val;
                    treeCnt[i] += 1;
                }
                totalSum += val;
            }
 
            long long V = v[k];
            if (totalSum < V) continue; // can never collapse this level via stability
 
            // Fenwick descent: find pos with prefixSum(pos) < V <= prefixSum(pos+1)
            int pos = 0;
            long long curSum = 0;
            int curCnt = 0;
            for (int bit = LOG; bit >= 0; bit--) {
                int next = pos + (1 << bit);
                if (next <= D && curSum + treeSum[next] < V) {
                    curSum += treeSum[next];
                    curCnt += treeCnt[next];
                    pos = next;
                }
            }
 
            int nextIdx = pos + 1; // 1-based index of the value-group that crosses threshold
            long long remaining = V - curSum;
            int value = allValsBuf[nextIdx - 1];
            long long needed = (remaining + value - 1) / value;
            long long candidate = curCnt + needed;
            if (candidate < best) best = candidate;
        }
 
        long long answer = min((long long)m, best);
        printf("%lld
", answer);
    }
    return 0;
}