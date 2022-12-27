#include <iostream>
#include <set>

using std::set;
using std::string;

int main(){
  set<string> names;

  names.insert("Test");
  names.insert("filipito");
  names.insert("Filipollas");
  names.insert("filipito"); // Doesn't insert it because already exists.

  names.emplace("Something"); // Insert it by alphabetical order

  std::cout << "LEN: " << names.size() << "\n";

  for (string i : names){
    std::cout << i << "\n";
  }

  if (names.empty()) std::cout << "HAHA You have no friends"; // If set is empty

  if (names.count("Test")){ // If contains "Test"
    std::cout << "One of your friends has a stupid name.";
  }

  names.clear(); // Clear the set

  return 0;
}