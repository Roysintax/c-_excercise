#include <iostream>
using namespace std;

int main() {
  // Write code here 💖
  double cat, human;
  cout << "Welcome to the Cat Years program! This only works for cats older than 2 years old." << endl;
    cout << "Enter your cat's age in years: ";
    cin >> cat;
    human = 24 + (cat - 2) * 4;
    cout << "Your cat is " << human << " in human years." << endl;  
}