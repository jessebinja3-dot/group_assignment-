#include <iostream>
using namespace std;



int calculateNumber(string senText){
    return senText.size();
}

int main(){
    string senText;

    cout << "Enter a text or sentence please : " << endl;
    getline(cin, senText);

    int size = calculateNumber(senText);
    cout << "The size of this sentence is : " << size << endl;

    return 0;


}