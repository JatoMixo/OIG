#include <iostream>

using std::string, std::cin, std::cout;

int main(){

  /*int something = 0;
  int s = 0;
  do {
    something += s;
  } while (cin >> s && s != 0);

  cout << something;*/

  int nota;
  string alumno;

  while (cin >> alumno >> nota && alumno != "q" && nota != -1) {
    cout << "El gilipollas de " << alumno << " ha sacado un " << nota << '\n';
  }

  return 0;
}