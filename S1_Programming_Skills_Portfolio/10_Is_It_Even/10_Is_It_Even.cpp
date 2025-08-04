#include <iostream>
#include <string>
using namespace std;

// Function to check if a number is even or odd, returning an appropriate message
string checkEvenOdd(int number) {
    // Use modular operator to check if the number is divisible by 2
    if (number % 2 == 0) {
        return "The provided number is even";
    } else {
        return "The provided number is odd";
    }
}

int main() {
    // Declare a variable to store the user's input
    int userInput;
    
    // Prompt the user to enter a number
    cout << "Enter a number: ";
    
    // Read the user's input (in this case, we'll assume the input is 8)
    cin >> userInput;
    
    // Call the checkEvenOdd function and store the returned message
    string result = checkEvenOdd(userInput);
    
    // Output the result message to the console
    cout << result << endl;
    
    // Indicate successful program completion
    return 0;
}