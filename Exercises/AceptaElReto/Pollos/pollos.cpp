#include <iostream>
#include <string>

using std::string, std::cin, std::cout;

string calculateMessage(int numberCase);

int main(){
  
  int cases;
  cin >> cases;

  for (int i = 0; i < cases; i++){
    int number_case;
    cin >> number_case;

    cout << "Result: " << calculateMessage(number_case) << "\n";
  }
  return 0;
}

string calculateMessage(int numberCase){
  int characters[4];

  

  string returned;

  for (int i = 0; i < sizeof(characters)/sizeof(characters[0]); i++){
    returned.append(std::to_string(characters[i]));
    returned.append(" ");
  }

  return returned;
}