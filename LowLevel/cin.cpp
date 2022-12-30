#include <iostream>
#include <map>
#include <utility>

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
  std::map<string, int> alumnos_notas;

  while (cin >> alumno >> nota && alumno != "q" && nota != -1) {
    cout << "El gilipollas de " << alumno << " ha sacado un " << nota << '\n';
    alumnos_notas[alumno] = nota;
  }

  std::cout << "----------------------------\n";

  for (std::pair<string, int> i : alumnos_notas){
    std::cout << "Alumno: " << i.first << '\n';
    std::cout << "Nota: " << i.second << '\n';
    std::cout << "----------------------------\n";
  }

  return 0;
}