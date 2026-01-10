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