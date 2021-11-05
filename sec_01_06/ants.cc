#include <cstdio>
#include <iostream>
#include <math.h>

int run(int orders[], int bar_len) {
  bool is_continue = true;
  int next_orders[bar_len + 1];
  int cnt = 0;
  while (is_continue) {
    cnt += 1;
    is_continue = false;
    for (int i = 0; i < bar_len + 1; i++) {
      if (orders[i] == 0 || i == bar_len) {
        continue;
      } else if (orders[i] == 1 && orders[i+1] == 2) {
        next_orders[i] = 2;
        is_continue = true;
      } else if (orders[i] == 2 && (i == 0 || orders[i-1] == 1)) {
        next_orders[i] = 1;
        is_continue = true;
      }
    }
    orders = next_orders;
    for (int i = 0; i < bar_len + 1; i++) {
      next_orders[i] = 0;
    }
  }
  return cnt;
}


int main() {
  int l, n;
  int max_cnt = 0, min_cnt = pow(10, 6);

  //standard input
  std::cout << "'L n'の順に入力してね" << std::endl;
  scanf("%d %d", &l, &n);

  const int first_address[l+1] = {};
  int x[n], address[l+1];
  int pattern_times = std::pow(2, n);
  std::cout << "ありの位置の座標を順に入力してね。(決定は改行)" << std::endl;
  for (int i = 0; i < n; i++) {
    scanf("%d", &x[i]);
  }
  int ii, this_cnt;
  for (int i = 0; i < pattern_times; i++) {
    ii = i;
    for (int t = 0; t < l + 1; t++) {
      address[t] = 0;
    }
    for (int t = 0; t < n; t++) {
      if (ii % 2 == 0) {
        address[x[t]] = 1;
      } else {
        address[x[t]] = 2;
      }
      ii /= 2;
    }
    this_cnt = run(address, l);
    max_cnt = std::max(max_cnt, this_cnt);
    min_cnt = std::min(min_cnt, this_cnt);
  }
  std::cout << "最小時間：" << min_cnt << "最大時間：" << max_cnt << std::endl;
}
