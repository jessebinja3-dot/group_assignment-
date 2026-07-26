// Question 10: Student Grade
// Accepts a student's mark and displays the corresponding grade.
 
#include <iostream>
using namespace std;
 
int main() {
    double mark;
 
    cout << "Enter the student's mark: ";
    cin >> mark;
 
    char grade;
 
    if (mark >= 80 && mark <= 100) {
        grade = 'A';
    } else if (mark >= 70 && mark <= 79) {
        grade = 'B';
    } else if (mark >= 60 && mark <= 69) {
        grade = 'C';
    } else if (mark >= 50 && mark <= 59) {
        grade = 'D';
    } else if (mark >= 0 && mark < 50) {
        grade = 'F';
    } else {
        cout << "Invalid mark entered." << endl;
        return 1;
    }
 
    cout << "Grade: " << grade << endl;
 
    return 0;
}
