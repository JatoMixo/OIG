#include <iostream>
#include <vector>

int main(){
  
  /*==== SIMPLE TUTORIAL ====*/

  /*std::vector<int> notas(3, 0);
  notas[0] = 3, notas[1] = 4, notas[2] = 0;
  for (int i : notas){std::cout << "Nota: " << i << "\n";}
  std::cout << "Cantidad notas: " << notas.size() << "\n";
  
  notas.push_back(9);

  std::cout << "Nota final: " << notas[notas.size() - 1] << "\n";*/


  /* === NOW FOR THE FUN PART ===*/
  /* === CALCULADOR EXÁMENES C++ ===*/

  std::cout << "JatoMixo: Calculador de Exámenes 2.0 Baby\n";
  std::cout << "-----------------------------------------\n";

  while (2 > 1){
    // Materia
    std::cout << "Materia: ";
    std::string subject;
    std::cin >> subject;

    std::vector<double> notas(0);

    std::cout << "Introduce tus notas: \n";
    for (int i = 1; i > 0; i++){
      std::cout << i << ">>>";
      double nota;
      std::cin >> nota;

      if (nota == -1) break;

      notas.push_back(nota); 
    }

    double media = 0;

    for (int i = 0; i < notas.size(); i++){
      media += notas[i];
    }

    media /= notas.size();

    std::cout << "Tu media: " << media << "\n";
    std::cout << "Porcentaje que cuentan los exámenes: ";
    double porcent = 0;
    std::cin >> porcent;

    double result = media * porcent/100;
    std::cout << "Tus exámenes suman: " << result << "\n";

    std::cout << "-----------------------------------------\n";
  }

  return 0;
}
