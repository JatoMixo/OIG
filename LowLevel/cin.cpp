#include <iostream>

using std::string, std::cin, std::cout;

int main(){

  int something = 0;
  int s = 0;
  do {
    something += s;
  } while (cin >> s && s != 0);

  cout << something;

  return 0;
}