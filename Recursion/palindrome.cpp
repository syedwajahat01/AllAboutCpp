#include <iostream>
using namespace std;

bool solve(string s, int low, int high) {
    if (low >= high) {  // base case: checked all characters
        return true;
    }
    if (s[low] != s[high]) {  // characters don't match
        return false;
    }
    return solve(s, low + 1, high - 1);  // recursive check for inner substring
}

int main() {
    string n;
    cin >> n;

    bool ans = solve(n, 0, n.length() - 1);
    cout << (ans ? "true" : "false");  // print the result
    return 0;
}
