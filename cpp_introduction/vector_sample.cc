# include <iostream>
# include <vector>

int main(){
  std::vector<int> x = {4,3,2,1,0};
  auto px = x.data(1);
  auto num = *px;
  std::cout << num << std::endl;
  return 0;
}
