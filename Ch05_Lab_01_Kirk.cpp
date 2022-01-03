#include <iostream>
using namespace std;

int main ()
{
    // variables
    int evenSum =  0;
    int oddSum = 0;
    int numCount = 0;
    int numbers = 0;

    // inputs
    cout << "Please enter 10 integers:" << endl;
    while (numCount < 10)
    {
        cin >> numbers;
        if (numbers % 2 == 0)
        {
            evenSum = evenSum + numbers;
        }
        else
        {
            oddSum = oddSum + numbers;
        }
        numCount++;
    }

    // outputs
    cout << "Even sum: " << evenSum << endl;
    cout << "Odd sum: " << oddSum << endl;

    return 0;
}
