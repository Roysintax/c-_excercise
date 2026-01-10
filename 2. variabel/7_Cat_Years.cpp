// Congrats!
// Woohoo! You learned variables in C++! 🙌

// Here's a recap of everything we learned in this chapter:

// Data types: int, double, char, string, bool.
// Arithmetic operators: +, -, *, /.
// The % modulo finds the remainder.
// Chaining write multiple outputs in a single statement with <<.
// The std::cin statement is used to get user input.
// It's time to use what we've learned to build something awesome!

// Instructions
// Have you wondered how old your cat is when they are older? Your furry friend might be cute and small, but they are older than you realize! 🐱

// To put it into perspective: The first two cat years count as 24 human years (the first year = 15 human years, the second year = 9 human years).

// Each additional cat year counts as 4 human years.

// Write a C++ program that asks the user to enter their cat's age and then calculate the equivalent human age right meow.


// human=(cat−2)∗4+24

// It should look something like:

// Welcome to the Cat Years program! This only works for cats older than 2 years old.

// Enter your cat's age: 4
// Your cat is 32 years old in human years.

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