#include <iostream>
using namespace std;

int main()
{
    int numbers[5];
    int value;
    bool found = false;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Enter value to search: ";
    cin >> value;

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == value)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "Value found" << endl;
    }
    else
    {
        cout << "Value not found" << endl;
    }

    return 0;
}
