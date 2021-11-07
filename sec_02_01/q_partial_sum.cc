#include <cstdio>
#include <iostream>
#include <queue>

int k;
bool search(int subtotal, std::queue<int> ar) {
  if (subtotal == k) {
    return true;
  } else if (subtotal > k || sizeof(ar) <= 0) {
    return false;
  } else {
    int next_subtotal;
    for (int i = 0; i < sizeof(ar); i++) {
      next_subtotal = subtotal + ar.front();
      ar.pop();
      if (search(next_subtotal, ar)) {
        return true;
      }
    }
    return false;
  }
}

int main() {
  int n, tmp_a;
  std::queue<int> a;
  std::cout << "n = ";
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    std::cout << "a" << i << "= ";
    scanf("%d", &tmp_a);
    a.push(tmp_a);
  }
  std::cout << "k = ";
  scanf("%d", &k);
  if (search(0, a)) {
    std::cout << "ありました" << std::endl;
  } else {
    std::cout << "なかった" << std::endl;
  }
  return 0;
}
