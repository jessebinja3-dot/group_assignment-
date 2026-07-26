#include <iostream>
using namespace std;

void swap(int& a, int& b){
    int temp;
    
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int x, y, tempo;

    cout <<"Enter the number x  : ";
    cin >> x;

    cout <<"Enter the number y :";
    cin >> y;

    swap(x, y);
    cout << "x is now equal to : " << x << endl;
    cout << "y is now equal to : " << y << endl;
return 0;
}