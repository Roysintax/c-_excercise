// We've made it to the end of the first chapter! 🥳
    // std::cout << "Congrats! You’ve made it.";

    // To recap what we've learned:
    // The std::cout() statement outputs messages to the terminal.
    // C++ code runs one line at a time, from top to bottom.
    // Single line comments are created using the // forward slashes.
    // Multi-line comments are started by /* and closed with */.
    // And a whole C++ program looks like this:
    // #include <iostream>int main() {
    //   std::cout << "Howdy! 🤠";
    // }

    // It's time to use what we've learned to build something awesome!
    // Instructions
    // Sign Bunny is a Twitter meme featuring an ASCII art rabbit holding a sign. 🐰
    // In this final exercise, you are going to create a sign bunny with C++.
    // Use std::cout statements to output:
    // |￣￣￣￣￣￣￣|
    // |   MESSAGE  |
    // |    HERE    |
    // |____________|
    // (\__/) ||
    // (•ㅅ•) ||
    // / 　 づ

    // Start with a comment with today’s date.
    // Use multiple std::cout to produce this art.
    // Add a little message for the world!
    // When you are done, click “Run”, take a screenshot of your program, click the Twitter icon, and share your sign bunny!

#include <iostream>    
int main() {
    // R"(...)" tells C++ to treat everything inside exactly as written     
    std::cout << R"(
|￣￣￣￣￣￣￣|
|   MESSAGE  |
|    HERE    |
|____________|
(\__/) ||
(•ㅅ•) ||
/ 　 づ
)" << std::endl;

    return 0;
}