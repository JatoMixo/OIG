#include <iostream>
#include <vector>
#include <utility>

using std::pair;
using std::cout;
using std::string;
using std::vector;

int main(){
  /*pair<string, int> student;
  student.first = "Someone else that is not you.";
  student.second = 9999999;

  std::cout << "Name: " << student.first << "\n";
  std::cout << "IQ: " << student.second << "\n";*/

  vector<pair<string, int> > friends(0);

  while (2 > 1){
    pair<string, int> fr;
    std::cout << "Enter a friend's name: ";
    std::cin >> fr.first;

    std::cout << "Enter a friend's age: ";
    std::cin >> fr.second;

    if (fr.first == "q") {
      break;
    }

    friends.push_back(fr);
  }

  std::cout << "Friend List\n";
  std::cout << "-----------\n";

  for (int i = 0; i < friends.size(); i++){
    std::cout << "Name: " << friends[i].first << "\n";
    std::cout << "Age: " << friends[i].second << "\n";
    std::cout << "------------------\n";
  }

  return 0;
}
