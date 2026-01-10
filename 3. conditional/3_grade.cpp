//An if statement is used to test a condition for truth:
//If the condition evaluates to true, code in the if part is executed.
//If the condition evaluates to false, code in the if part is skipped. 
//if (condition) 
//}
//For example, if the hour variable is greater than 18 (evening at 6 pm):
//if (hour > 18) {
//  std::cout << "Street light on 💡\n";
// }
// The code "inside" the if statement should be indented (we used two spaces).
// # Else
// An else clause can be optionally added after an if statement.
// If the condition evaluates to true, code in the if part is executed.
// If the condition evaluates to false, code in the else part is executed.
// For example, if the grade variable is greater than 60 and when it’s not:
// if (grade > 60) {
//   std::cout << "Pass\n";
// }else {
//   std::cout << "Fail\n";
// }

// If grade is greater than 60, output “Pass”.
// Else, output “Fail”.
// The code "inside" the else clause must also be indented.
// Instructions
// Write a C++ program that checks if a person has a fever based on their temperature.
// Declare a temp variable and give it your current body temperature.
// If the temperature is greater than or equal to 100°F, the program should output “You have a fever. 🤒”
// Otherwise, it should output “You do not have a fever. 🕺

// word in " " please create ass comment in c++ 


#include <iostream>
using namespace std;

int main() {
  // Write code here 💖
  int grade;
  cout << "Input Nilai" << endl;
  cin >> grade;   
  if (grade > 80) {
  // code inside 
  cout << "Lulus nulai" << endl;
  }else{
    cout << "Belum Lulus" << endl;
  }
}
