// Question 7: Positive, Negative or Zero
// Determines whether a number entered by the user is positive, negative or zero.
 
#include <iostream>
using namespace std;
 
int main() {
    double number;
 
    cout << "Enter a number: ";
    cin >> number;
 
    if (number > 0) {
        cout << number << " is Positive." << endl;
    } else if (number < 0) {
        cout << number << " is Negative." << endl;
    } else {
        cout << number << " is Zero." << endl;
    }
 
    return 0;
}
