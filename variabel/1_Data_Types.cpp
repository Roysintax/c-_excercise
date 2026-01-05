// Variables
// In programming, variables are used for storing data values. Each variable has a data type, a variable name, and stores a value.
// Each variable is like a box in the computer memory:
// 📦 stores a student’s name.
// 📦 stores a student’s grade.
// 📦 stores a student’s GPA.
// 📦 stores a student’s honor status.
// These are all valid variable names and values:
// std::string name = "Lady Bird";int grade = 12;double gpa = 3.25;bool honor = false;

// This might look like gibberish for now, but don’t worry! We will get into each of these.
// First, let’s learn about the five data types!
// # Data Types
// ## Int
// An integer, or int, is a whole number. It has no decimal point and contains the number 0, positive and negative counting numbers. If we counted the number of people on the bus or the number of jellybeans in a jar, we would use an integer.
// int year = 2024;int age = 28;

// ## Double
// A floating-point number, or double, is a decimal number. It can be used to represent fractions or precise measurements. If you were measuring the length and width of the couch, calculating the test score percentage, or storing a baseball player’s batting average, we would use a double instead of an int.
// double pi = 3.14159;double meal_cost = 12.99;

// ## Char
// A character, or char, is used for storing individual characters. Characters are wrapped in single quotes ' '.
// char mention = '@';char hashtag = '#';

// ## String
// A string is used for storing text (sequence of characters). Strings are wrapped in double quotes " ". The reason it's std::string is because it's from the standard C++ library and that it was not always part of C++.
// std::string message = "good nite 😊";
// std::string username = "@potus";

// Remember "Howdy! 🤠" from Chapter 1? That's a string variable.
// ## Bool
// A Boolean data type, or bool, stores a value that can only be either lowercase true or false. It's named after the British mathematician George Boole (1815-1864).
// bool late_to_class = false;bool cranky = true;

#include <iostream>

int main() {
  // Write code here 💖
  std::string name = "Lady Bird";
  double gpa = 3.25;
  int year = 2024;
  int age = 28;
  bool honor = false;
}