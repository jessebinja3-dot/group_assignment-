#include <iostream>
using namespace std;

int main(){
    int x;
    int *ptr = &x;

    cout <<"Enter the integer x : ";
    cin >> x;
    cout <<"The value of x is : " << x << endl;

    cout << "The value of x via the pointer is : " << *ptr << endl;
    cout << "The memory adress of x is : " << ptr <<endl;

    return 0;

}