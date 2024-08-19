#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int originalNumber = n;
    int countDigit = 0;
    int sum = 0;

    // Counting the number of digits
    while (n != 0)
    {
        n /= 10;
        countDigit++;
    }

    // Reset n to the original number
    n = originalNumber;

    // Calculating the sum of digits raised to the power of countDigit
    while (n != 0)
    {
        int remainder = n % 10;
        sum += pow(remainder, countDigit);
        n /= 10;
    }

    // Check if the number is an Armstrong number
    if (sum == originalNumber)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }

    return 0;
}
