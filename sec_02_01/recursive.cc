#include <cstdio>
#include <iostream>

int fact(int n) {
  if (n == 0) return 1;
  return n * fact(n-1);
}

int make_fact() {
  int temp;
  std::cout << "何階上にしますか？" << std::endl;
  scanf("%d", &temp);
  std::cout << temp << "! = " << fact(temp) << std::endl;
  return 0
}

int memo[];

int fib(int n) {
  if (n <= 1) return n;
  if (memo[n] != 0) return memo[n];
  return memo[n] = fib(n-1) + fib(n-2);
}

int make_fib() {
  int temp;
  std::cout << "いくつまでのフィボナッチ数列にしますか？" << std::endl;
  scanf("%d", &temp);
  std::cout << fib(temp) << std::endl;
  return 0
}

int main() {
  make_fib();
}
