#include <iostream>
#include <string>

void Print(std::string&){
  std::cout << "左辺値参照" << std::endl;
}

void Print(std::string&&) {
  std::cout << "右辺値参照" << std::endl;
}

int main() {
  std::string str = "hoge";

  Print(str);
  Print(std::move(str));
  Print("hoge");

  return 0;
}
