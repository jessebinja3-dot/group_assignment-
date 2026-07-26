// This program will take two numbers and return their sums
// We will a function to do that


#include <iostream>
using namespace std;

int result;
int sum(int a, int b){
    return result = a + b;
}

int main (){
    int num1;
    int num2;
    

    cout << "Enter the first number : " << endl;
    cin >> num1;
    
    cout << "Enter the second number : " << endl;
    cin >> num2;

    result = sum(num1, num2);
    cout << "The summ of " << "num1 " << "and " << "num2" <<" is : " << result << endl;
    
    return 0;
}



