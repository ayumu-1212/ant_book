#include <bits/stdc++.h>
using namespace std;
typedef long long lint;

int main() {
  int N, W;
  cin >> N >> W;
  vector<vector<int>> wv(N, vector<int>(2));
  for (int i = 0; i < N; i++) scanf("%d %d", &wv[i][0], &wv[i][1]);
  vector<vector<int>> results(N+1, vector<int>(W+1, 0));
  for (int i = 0; i < N; i++) for (int j = wv[i][0]; j <= W; j++) {
    results[i+1][j] = max(results[i][j], results[i][j - wv[i][0]] + wv[i][1]);
  }
  cout << results[N][W];
}
