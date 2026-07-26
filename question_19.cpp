#include <iostream>
 using namespace std;
 int main() 
{
	
 int numbers[5];
 
 for (int i = 0; i < 5; i++) 
{
	
 cout << "Enter number " << i + 1 << ": ";
 cin >> numbers[i];
 
 }
 
 int largest = numbers[0];
  
for (int i = 1; i < 5; i++) 
{
	
 if (numbers[i] > largest) 
 {
	
 largest = numbers[i];
 
 }
 
}
 
 cout << "Largest number = " << largest << endl;
 
 return 0; 
}
