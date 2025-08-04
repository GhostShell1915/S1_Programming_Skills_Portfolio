#include <iostream>
using namespace std;

int main() {
    // Define the correct password
    const int correctPassword = 12345;
    
    // Declare a variable to store the user's password attempt
    int userInput;
    
    // Prompt the user for the first password attempt
    cout << "Enter the password: ";
    cin >> userInput;
    
    // Use a while loop to keep asking for input until the correct password is entered
    while (userInput != correctPassword) {
        // Inform the user the password is incorrect and prompt for another attempt
        cout << "Incorrect password. Try again: ";
        cin >> userInput;
    }
    
    // Output success message when the correct password is entered
    cout << "Welcome to the Secure Area" << endl;
    
    // Indicate successful program completion
    return 0;
}