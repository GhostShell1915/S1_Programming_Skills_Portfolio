#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the user's month input
    int month;

    // Prompt the user to enter a month number
    cout << "Enter a month (1 for January, 12 for December): ";

    // Read the user's input
    cin >> month;

    // Use a switch statement to determine the number of days based on the month
    switch (month) {
        case 1: // January
            cout << "January has 31 days." << endl;
            break;
        case 2: // February
            cout << "February has 28 days (29 in a leap year)." << endl;
            break;
        case 3: // March
            cout << "March has 31 days." << endl;
            break;
        case 4: // April
            cout << "April has 30 days." << endl;
            break;
        case 5: // May
            cout << "May has 31 days." << endl;
            break;
        case 6: // June
            cout << "June has 30 days." << endl;
            break;
        case 7: // July
            cout << "July has 31 days." << endl;
            break;
        case 8: // August
            cout << "August has 31 days." << endl;
            break;
        case 9: // September
            cout << "September has 30 days." << endl;
            break;
        case 10: // October
            cout << "October has 31 days." << endl;
            break;
        case 11: // November
            cout << "November has 30 days." << endl;
            break;
        case 12: // December
            cout << "December has 31 days." << endl;
            break;
        default: // Handle invalid input
            cout << "Invalid month number. Please enter a number between 1 and 12." << endl;
            break;
    }

    // Indicate successful program completion
    return 0;
}