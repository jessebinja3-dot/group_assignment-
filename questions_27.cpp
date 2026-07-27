#include <iostream>
using namespace std;

class Student {
    public: 
    string name;
    int age;
  void displayInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age : " << age << endl;
    }
};

int main(){
    Student s1;

    s1.name = " Maria ";
    s1.age = 27;
    
     s1.displayInfo();

    return 0;
}
