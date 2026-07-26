#include <iostream>
using namespace std;

void evenOdd(int a){
    if (a % 2 == 0){
        cout << "This number is Even" << endl;
    }
    else if( a % 2 != 0){
        cout << "Ths number is Odd" << endl;
    }
}

int main(){

    int integer;
    cout <<"Enter an integer : ";
    cin >> integer;

    evenOdd(integer);

    return 0;
}