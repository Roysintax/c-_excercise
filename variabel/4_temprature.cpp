#include <iostream>

int main() {
  // Write code here 💖
  float celcius, fahrenheit;
  std::cout << "Masukkan suhu saat ini : ";
  std::cin >> fahrenheit;
  celcius = (fahrenheit-32) / 1.8;
  std::cout << "Suhu saat ini adalah " << celcius << " derajat celcius";
}