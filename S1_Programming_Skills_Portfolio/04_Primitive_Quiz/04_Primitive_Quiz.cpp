#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare a string variable to store the user's answer
    string answer;
    
    // Print the question to the console
    cout << "What is the capital of France? ";
    
    // Get the user's input (including spaces) and store it in 'answer'
    getline(cin, answer);
    
    // Check if the answer is correct (case-sensitive comparison)
    if (answer == "Paris") {
        // Output message for correct answer
        cout << "Your answer is correct!" << endl;
    } else {
        // Output message for incorrect answer
        cout << "Your answer is wrong." << endl;
    }
    
    // Indicate successful program completion
    return 0;
}