#include <bits/stdc++.h>

using namespace std;

int kth_largest(vector<int> values, int k) {
    priority_queue<int> pq(values.begin(), values.end());
    for (int i = 0; i < k; i++) {
        if (pq.empty()) return numeric_limits<int>::max();
        pq.pop();
    }

    return pq.top();
};