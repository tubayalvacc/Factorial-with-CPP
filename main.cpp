#include <iostream> // Include the iostream library for input/output functions
#include <cstdlib>  // Include the cstdlib library for standard library functions

// Function prototype for calculating the factorial of a number
int calculateFactorial(int number);

int main() {
    int inputNumber; // Declare a variable to store the input number

    // Prompt the user to enter a positive integer
    std::cout << "\nEnter a positive integer: ";
    std::cin >> inputNumber; // Read the input number from user input

    // Output the factorial of the entered number
    std::cout << "\nFactorial of " << inputNumber << ": " << calculateFactorial(inputNumber);

    return 0; // Return 0 to indicate successful execution
}

// Function to calculate the factorial of a number using recursion
int calculateFactorial(int number) {
    // Base case: if the number is 1, return 1
    if (number == 1) {
        return 1;
    } else {
        // Recursive case: multiply the number by the factorial of the number minus one
        return number * calculateFactorial(number - 1);
    }
}


/* Explanation of Variable Names:
inputNumber: The positive integer input by the user for which the factorial is to be calculated.
calculateFactorial: Function to calculate the factorial of a given number.
number: Parameter for the calculateFactorial function representing the current number being processed.*/