//The program ask the user for its full name
// it takes the full name and displays it



#include <iostream>
using namespace std;

int main(){
string fullName; // Variable the program will use 

    cout << "Enter your full name please :" << " --- > ";
    getline(cin, fullName); // taking 

    cout << "Your name is : " << " ---> " << fullName << endl;

    return 0;
}