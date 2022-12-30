#include <iostream>

int main(){

  char operator;

  int x;
  int y;

  std::cin >> x >> operator >> y;

  int result;

  if (operator == '+') result = x + y;
  else if (operator == '-') result = x - y;
  else if (operator == '/') result = x / y;
  else if (operator == '*') result = x * y;

  std::cout << result;

  return 0;
}