// Question 8: Even or Odd
// Determines whether an integer entered by the user is even or odd.
 
#include <iostream>
using namespace std;
 
int main() {
    int number;
 
    cout << "Enter an integer: ";
    cin >> number;
 
    if (number % 2 == 0) {
        cout << number << " is Even." << endl;
    } else {
        cout << number << " is Odd." << endl;
    }
 
    return 0;
}
