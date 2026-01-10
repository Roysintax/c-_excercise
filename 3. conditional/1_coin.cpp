#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  std::srand(std::time(nullptr));
  int num = std::rand() % 2;  // 0 or 1

  if (num == 1) {
    std::cout << "Heads\n";
  } else {
    std::cout << "Tails\n";
  }

  return 0;
}