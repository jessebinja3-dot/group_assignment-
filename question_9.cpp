// Question 9: Largest of Three Numbers
// Accepts three numbers and determines the largest among them.
 
#include <iostream>
using namespace std;
 
int main() {
    double a, b, c;
 
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
 
    double largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
 
    cout << "The largest number is: " << largest << endl;
 
    return 0;
}
