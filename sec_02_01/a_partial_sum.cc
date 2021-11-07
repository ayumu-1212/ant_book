#include <cstdio>
#include <iostream>

int a[1000];
int n, k;

bool dfs(int i, int sum) {
  if (i == n) return sum == k;

  if (dfs(i+1, sum)) return true;

  if (dfs(i+1, sum + a[i])) return true;

  return false;
}

void solve() {
  a[0] = 1;
  a[1] = 2;
  a[2] = 4;
  a[3] = 7;
  n = 4;
  k = 15;
  if (dfs(0, 0)) printf("Yes\n");
  else printf("No\n");
}

int main() {
  solve();
}
