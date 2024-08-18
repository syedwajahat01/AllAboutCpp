#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // zero also counts as a digit
    if (n == 0)
        return 1;
    // to get the count of digits
    int count = 0;
    while (n > 0)
    {
        // divide by 10
        n /= 10;
        // increment the counter
        count++;
    }
    cout << count;
    return 0;
}