#include <iostream>
using namespace std;

class Student {
    public: 
    string name;
    int age;
};

int main(){
    Student s1;

    s1.name = " Maria ";
    s1.age = 27;
    
    cout << s1.name << " " << s1.age << endl;

    return 0;
}