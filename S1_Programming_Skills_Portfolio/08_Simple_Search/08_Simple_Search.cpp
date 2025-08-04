#include <iostream>
#include <string>
using namespace std;

int main() {
    // Initialize the string array with the given names
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    
    // Define the search term
    string searchTerm = "Sam";
    
    // Variable to track if the search term is found
    bool found = false;
    
    // Loop through the array to test each element against the search term
    for (int i = 0; i < 6; i++) {
        if (names[i] == searchTerm) {
            // Set found to true if the search term matches the current element
            found = true;
            break; // Exit the loop once the search term is found
        }
    }
    
    // Output an appropriate message based on whether the search term was found
    if (found) {
        cout << "The name \"" << searchTerm << "\" was found in the array." << endl;
    } else {
        cout << "The name \"" << searchTerm << "\" was not found in the array." << endl;
    }
    
    // Indicate successful program completion
    return 0;
}