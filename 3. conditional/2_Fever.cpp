#include <iostream>

int main() {
  
  // Declare a temp variable and give it your current body temperature
  double temp = 98.6; 

  // Check if the temperature is greater than or equal to 100
  if (temp >= 100) {
    
    // "You have a fever. 🤒"
    std::cout << "You have a fever. 🤒\n";
    
  } else {
    
    // "You do not have a fever. 🕺"
    std::cout << "You do not have a fever. 🕺\n";
    
  }
  
  return 0;
}