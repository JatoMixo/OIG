#include <iostream>

int main(){
  std::cout << "Enter a number: ";
  int n;
  std::cin >> n;

  if (n < 1 || n > 10000) std::cout << "Invalid number.\n";
  else std::cout << "Next number: " << n + 1 << "\n";

  return 0;
}