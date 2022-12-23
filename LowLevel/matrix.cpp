#include <iostream>
#include <vector>

using std::vector;

int main(){
  
  /* NORMAL 
  int matriz[2][2] = {
    {1, 2},
    {3, 4}
  };

  std::cout << *matriz[0, 1];
  std::cout << matriz[0][0];

   VECTOR 
  vector< vector <int> > matrix(2, vector<int>(2, 0));

  for (int i = 0; i < matrix.size(); i++){
    for (int j = 0; j < matrix[i].size(); j++){
      matrix[i][j] = i + j;
      std::cout << "Matrix " << j << "x" << i << ": " << matrix[i][j] << "\n";
    }
  }*/


  /* NOW FOR THE FUN PART */
  // Buscaminas
  
  std::cout << "JatoMixo: Buscaminas\n";
  
  int score = 0;

  vector< vector <int> > grid(5, vector<int>(5, 0));

  grid[3][3] = 1;
  grid[2][3] = 1;
  grid[4][4] = 1;

  while (2 > 1){
    std::cout << "Enter a X value for the grid: ";
    int x;
    std::cin >> x;

    std::cout << "Enter a Y value for the grid: ";
    int y;
    std::cin >> y;

    int pos = grid[y][x];

    if (pos == 1) break;
    else if(pos == 0) score++;
  }
  
  int maxScore = 22;
  if (score == maxScore) std::cout << "You won";
  else std::cout << "You lost";

  return 0;
}
