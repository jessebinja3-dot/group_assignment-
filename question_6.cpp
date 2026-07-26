// Question 6: Arithmetic Operations
// Accepts two numbers and displays sum, difference, product and quotient.
 
#include <iostream>
using namespace std;
 
int main() {
    double a, b;
    
    //take the two numbers from the user
 
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
   // calculations
    double sum = a + b;
    double difference = a - b;
    double product = a * b;
 
    cout << "\nSum        = " << sum << endl;
    cout << "Difference = " << difference << endl;
    cout << "Product    = " << product << endl;
 
    if (b != 0) {
        double quotient = a / b;
        cout << "Quotient   = " << quotient << endl;
    } else {
        cout << "Quotient   = Undefined (division by zero)" << endl;
    }
 
    return 0;
}
