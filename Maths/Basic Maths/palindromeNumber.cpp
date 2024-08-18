#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int originalNumber = n;  // Store the original number
    int reverseNumber = 0;

    while (n != 0) {
        int remainder = n % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        n /= 10;
    }

    cout << "Reversed number: " << reverseNumber << endl;

    if (originalNumber == reverseNumber) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
