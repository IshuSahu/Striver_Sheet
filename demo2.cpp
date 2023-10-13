#include <bits/stdc++.h>
using namespace std;

long long MaximumScore(int N, int K, vector<int> &arr) {
    long long maxScore = 0;

    if (K == 1) {
        for (int i = 0; i < N; i++) {
            maxScore += arr[i];
        }
        return maxScore;
    }

    int m = N / K;
    int r = N % K;

    for (int i = 0; i < K; i++) {
        int start = i * m;
        int end = (i + 1) * m;

        if (i < r) {
            end++;
        }

        vector<int> subarr(arr.begin() + start, arr.begin() + end);
        sort(subarr.begin(), subarr.end());
        maxScore += subarr.back();
    }

    return maxScore;
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    long long result = MaximumScore(N, K, arr);
    cout << result << endl;

    return 0;
}
