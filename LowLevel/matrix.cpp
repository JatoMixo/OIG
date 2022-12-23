#include <iostream>
#include <vector>

using std::vector;

int main(){
  
  /* NORMAL */
  int matrix[2][2] = {
    {1, 2},
    {3, 4}
  };

  std::cout << *matrix[0, 1];
  std::cout << matrix[0][0];

  /* VECTOR */
  vector< vector <int> > matrix;


  return 0;
}
