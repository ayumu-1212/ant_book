# include <bits/stdc++.h>
using namespace std;
typedef long long lint;
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define reps(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  int N, L, P;
  cin >> N >> L >> P;
  vector<int> A(N), B(N);
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> B[i];
  bool is_finished = false;
  int s = 0;
  int e = s + P;
  int count = 0;
  while (!is_finished) {
    cout << "kitayo";
    priority_queue<pair<int, int>> que;
    rep(i, N) {
      if (A[i] > s && A[i] <= e) que.push(make_pair(B[i], A[i]));
    }
    if (que.size() <= 0) {
      is_finished = true;
      count = -1;
      break;
    } else {
      count++;
      pair<int, int> tmp = que.top();
      s = tmp.second;
      e = s + tmp.first;
      if (e >= L) {
        is_finished = true;
      }
    }
  }
  cout << count;
}
