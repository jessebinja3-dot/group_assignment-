// Question 5: User Input
// Asks the user for two numbers and displays their sum.
 
#include <iostream>
using namespace std;
 
int main() {
    double num1, num2;
 
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
 
    double sum = num1 + num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
 
    return 0;
}
