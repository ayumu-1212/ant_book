#include <iostream>
#include <string>

// 入力
int n, a[MAX_N];

void solve() {
  int ans = 0; // 答え

  // 棒を重複して選ばないようi < j < kとなるようにしている
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        int len = a[i] + a[j] + a[k];
        int ma = max(a[i], max(a[j], a[k]));
        int rest = len - ma;

        if (ma < rest) {
          // 三角形が作れるので、答えを更新できれば更新
          ans = max(ans, len);
        }
      }
    }
  }
  printf("%d\n", ans);
}

int main() {
  n = 5;
  a = {2, 3, 4, 5, 10};
  solve();
  return 0
}
