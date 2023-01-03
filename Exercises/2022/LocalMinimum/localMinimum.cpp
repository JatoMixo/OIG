#include <iostream>

using std::string, std::cout, std::cin;

int main(){

  int lengthOfSucesion;
  std::cin >> lengthOfSucesion;

  int counter;
  int result;

  for (int i = 0; i < lengthOfSucesion; i++){
    std::cout << "? " << i << " " << i + 1 << '\n'; 
    char comparation;
    std::cin >> comparation;

    if (comparation == '>') counter++;
    else if (comparation == '<' && counter >= 1){
      result = i;
      break;
    } else counter = 0;
  }

  std::cout << "! " << result << '\n';

  return 0;
}