#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> nub;

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 100;
        
        result += remainder * remainder * remainder;
        
     
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else if 
        cout << num << " is not an Armstrong number.";

    return 0;
}