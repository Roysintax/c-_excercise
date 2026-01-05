#include <iostream> 

int main() {
  // Okay, now let’s get back to the whole program:
  //
  // #include <iostream>
  //
  // int main() {
  //   std::cout << "Best selling album in '79 was The Wall."; 
  // }
  //
  // Let’s go over the other two lines of code:
  //
  // #include <iostream> include libraries that we need to input/output.
  // int main() is a function. We will be mostly writing code inside the curly brackets { }.
  // Everything inside the curly braces { } is called a code block. Notice how it's indented, too!
  //
  // Line by Line
  // Now that we understand the structure of the program, note one thing:
  //
  // C++ is run one line at a time, from top to bottom of the file.
  //
  // We can output multiple messages by using multiple std::cout statements. For example, if we want to print out a bunch of best-selling albums from 1979:
  //
  // std::cout << "🔥 AC/DC - Highway to Hell\n";
  // std::cout << "🌈 Pink Floyd - Comfortably Numb\n";
  // std::cout << "🚓 The Police - Message in a Bottle\n";
  // std::cout << "🤘 The Clash - London Calling\n";
  // std::cout << "💔 Pat Benatar - Heartbreaker\n";
  //
  // This will output:
  //
  // 🔥 AC/DC - Highway to Hell
  // 🌈 Pink Floyd - Comfortably Numb
  // 🚓 The Police - Message in a Bottle
  // 🤘 The Clash - London Calling
  // 💔 Pat Benatar - Heartbreaker
  //
  // Notice how there are a bunch of \ns in the text. ☝️
  //
  // Escape Sequence
  // The \n is an escape sequence that creates a new line in a text!
  //
  // So the output appears on a second line. For example:
  //
  // std::cout << "This is line one\nThis is line two";
  //
  // This will be displayed as two lines:
  //
  // This is line one
  // This is line two
  //
  // Common escape sequences include \n (new line) and \t (tab).
  //
  // Now let’s use what we just learned to complete a special challenge!
  //
  // add as comment
  std::cout << "Best selling album in '79 was The Wall."; 
  std::cout << "🔥 AC/DC - Highway to Hell\n";
    std::cout << "🎸 Led Zeppelin - In Through the Out Door\n"
              "🎤 Pink Floyd - The Wall\n"
              "🎷 Michael Jackson - Off the Wall\n"
              "🎹 Fleetwood Mac - Tusk\n"
              "🎺 Bee Gees - Spirits Having Flown\n";

    return 0;
}