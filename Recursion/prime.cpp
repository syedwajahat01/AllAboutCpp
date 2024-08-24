#include<bits/stdc++.h>
using namespace std;

bool solve(int n, int i) {
    if (i >= sqrt(n)) {  // base case: reached the square root of n
        return true;
    }

    if (n % i == 0) {  // if n is divisible by i, it's not prime
        return false;
    }

    return solve(n, i + 1);  // recursively check the next i
}

int main() {
    int n;
    cin >> n;

    bool ans = solve(n, 2);
    cout << (ans ? "true" : "false");  // print "true" for prime, "false" otherwise
    return 0;
}
