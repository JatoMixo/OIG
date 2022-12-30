#include <iostream>
#include <algorithm>
#include <vector>

using std::string, std::cin, std::cout, std::vector, std::sort;

bool comparacion(int num1, int num2){
  bool returned;
  if (num1 > num2){
    return true;
  } else {
    return false;
  }

  return returned;
}
int main(){

  vector<int> edades;

  int edad;
  while (cin >> edad){
    if (edad == -1) break;
    edades.push_back(edad);
  }
  
  sort(edades.begin(), edades.end(), comparacion);

  cout << "--------\n";

  for (int i : edades){
    cout << "Edad: " << i << '\n';
    cout << "--------\n";
  }

  return 0;
}