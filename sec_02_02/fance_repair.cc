#include <bits/stdc++.h>
using namespace std;
typedef long long lint;


int main() {
  int N;
  scanf("%d", &N);
  priority_queue<int, vector<int>, greater<int> > L;
  for (int i = 0; i < N; i++) {
    int tmp;
    cin >> tmp;
    L.push(tmp);
  }
  int count = 0;
  while (L.size() > 1) {
    int sub_sum = 0;
    sub_sum += L.top(); L.pop();
    sub_sum += L.top(); L.pop();
    count += sub_sum;
    L.push(sub_sum);
  }
  cout << count;
}
