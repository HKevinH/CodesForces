#include <iostream>
#include <set>
#include <string>

// A Boy On Girl: CodeForce
int main() {
  std::string name;
  std::cin >> name; // Leemos El Input del username

  std::set<char>
      uniqueChars; // Creamos un set para almacenar los caracteres únicos

  for (char c : name) {
    uniqueChars.insert(c);
  }

  if (uniqueChars.size() % 2 == 0) {
    std::cout << "CHAT WITH HER!";
  } else {
    std::cout << "IGNORE HIM!";
  }
}
