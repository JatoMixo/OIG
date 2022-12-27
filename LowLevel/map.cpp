#include <map>
#include <utility>
#include <iostream>

using std::map;
using std::string;
using std::pair;

int main(){

  map<int, string> numbers;

  string i = "Zero";
  numbers[0] = i;
  i = "One";
  numbers[1] = i;

  for (int i = 0; i < numbers.size(); i++){
    std::cout << i << ": " << numbers[i] << "\n";
  }

  for (pair<int, string> i : numbers){
    std::cout << i.first << ": " << i.second << "\n";
  }

  numbers.erase(0);

  return 0;
}