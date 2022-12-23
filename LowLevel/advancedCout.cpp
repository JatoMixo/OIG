#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  cout << setprecision(4);
  cout << setfill('*');
  double pi = 3.14;
  cout << pi << std::endl; 
  cout << fixed;
  cout << pi << endl;
  return 0;
}
