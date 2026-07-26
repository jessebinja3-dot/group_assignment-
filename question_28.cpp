#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

    public:
Student(string n, int a){
        name = n;
        age = a;
}

 void displayInfo(){
 cout << "Name: " << name << ", Age: " << age << endl;
 }
};

int main(){
    Student s1( "Martinez", 20);
    s1.displayInfo();

    return 0;
}