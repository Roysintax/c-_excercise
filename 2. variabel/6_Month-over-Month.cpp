// User Input
// Thus far, we've only been outputting things to the user with std::cout, making our programs one-sided and not that fun. Almost every popular website, mobile app, or video game that you’re using has both input and output.

// So how do we get input from the user?

// C++ uses the std::cin to get user input:

// std::cout << "Enter your name: ";
// std::cin >> username;

// The cin (character input) refers to the standard input stream. It’s followed by the >> operator and the input variable.

// In the above example, the output will say "Enter your name: " and the user can type their response. They hit enter, and whatever the user typed gets stored in the username variable.

// Reminder: You need to declare a variable before you can use it.

// The full code should look something like:

// std::string username;

// std::cout << "Enter your name: ";
// std::cin >> username;

// std::cout << username;

// So here, we are declaring an empty username string before asking them to enter their name. And suppose the user typed in their name and pressed enter, it will output their name.

// The whole process looks like this in the terminal:

#include <iostream>
#include <iomanip> // For controlling output precision

using namespace std;

int main() {
    double month1, month2, mom_percentage;

    // 1. Input: Get the values for the two months
    cout << "--- Month-over-Month (MoM) Calculator ---" << endl;
    
    cout << "Enter value for Month 1 (Previous Month): ";
    while (!(cin >> month1)) { // Input validation
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    cout << "Enter value for Month 2 (Current Month): ";
    while (!(cin >> month2)) { // Input validation
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    // 2. Logic: Check for division by zero
    if (month1 == 0) {
        if (month2 == 0) {
            cout << "\nResult: 0% growth (Both values are zero)." << endl;
        } else {
            cout << "\nResult: Infinite growth (Previous month was 0)." << endl;
        }
    } else {
        // 3. Calculation: ((Current - Previous) / Previous) * 100
        mom_percentage = ((month2 - month1) / month1) * 100;

        // 4. Output
        cout << fixed << setprecision(2); // Set output to 2 decimal places
        cout << "\n-----------------------------------------" << endl;
        cout << "Month 1: " << month1 << endl;
        cout << "Month 2: " << month2 << endl;
        cout << "Growth:  " << mom_percentage << "%" << endl;
        cout << "-----------------------------------------" << endl;
    }

    return 0;
}