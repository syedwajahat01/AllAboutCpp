#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        char ch = 'A' + n - 1; // Start from the nth character
        for(int j = 1; j <= i; j++) {
            cout << (char)ch;
            ch--;
        }
        cout << endl;
    }
    return 0;
}
