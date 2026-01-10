// So far, every C++ program we've encountered has only had one path of execution — they all execute one line at a time, from top to bottom. Every time you run them, it gives you the same result.

// Sometimes, we want our program to do different things based on different conditions.

// It's like going down a highway. There's a fork ahead with a sign that reads, "Albuquerque: left. Phoenix: right."
// In the Conditionals chapter, we will explore how programs "make decisions" by evaluating different conditions and start introducing logic into our C++ code!

// Instructions
// Before we dive deep into something called an if statement, let's do a fun demo using a coin flip simulation!

// Create a coin.cpp program and type in the following:

// #include <iostream>
// #include <cstdlib>

// int main() {
//   srand(time(NULL));

//   int num = std::rand() % 2;  // Generates a random number that's either 0 or 1

//   if (num > 0.5) { 
//     std::cout << "Heads\n";
//   }
//   else { 
//     std::cout << "Tails\n";
//   }
// }

// Note: We will learn more about what this all means later in the chapter.

// All you need to know is that this program simulates a coin toss:

// ≈ 50% of the time, it's "Heads".
// ≈ 50% of the time, it's "Tails".
// Run the program 5 times to get a taste of the if/else statement!

// How many times did it go Heads?

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