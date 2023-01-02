#include <iostream>
#include <cmath>

using std::string, std::cout, std::cin;

int calculateBowTies(int x, int y);

int main(){
  int x;
  int y;
  std::cin >> x >> y;
  cout << calculateBowTies(x, y);
  return 0;
}

int calculateBowTies(int x, int y){
  if (x < 10 || y < 10) return 0;

  if (x > y) return floor(x/y) + calculateBowTies(x - y*floor(x/y), y);
  else if (y > x) return floor(y/x) + calculateBowTies(x, y - x*floor(y/x));
  else if (y == x) return 1;
}