// Question 3: Comments
// This is an example of a SINGLE-LINE comment (starts with //)
 
/*
   This is an example of a MULTI-LINE comment.
   Multi-line comments are used when the explanation
   spans more than one line. Anything written inside
   this block is ignored by the compiler.
*/
 
#include <iostream>
using namespace std;
 
int main() {
    // Single-line comment: prints a message to the console
    cout << "This program demonstrates single-line and multi-line comments." << endl;
 
    /* Multi-line comment:
       The two lines below simply show that code can still run
       normally even though it is documented with comments. */
    cout << "Comments are ignored by the compiler and do not affect output." << endl;
 
    return 0;
}
