#include <iostream>
using namespace std;

// Function to calculate the factorial and return it as a string
string factorial(int n) {
    long long fact = 1;  // Use a long long to handle larger factorial values
    string factStr = "";  // String to store the factorial result

    // Calculate factorial
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    // Convert the result to a string and return
    factStr = to_string(fact);
    return factStr;
}

int main() {
    int num = ;
    
    // Get the factorial result as a string
    string result = factorial(num);
    
    // Display the result
    cout << "Factorial of " << num << " is: " << result << endl;

    return 0;
}
