#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        // Printing leading spaces
        for(int j = 1; j < n - i; j++) {
            cout << " ";
        }

        // Printing characters starting from 'A'
        char ch = 'A';
        for(int j = 0; j <= i; j++) {
            cout << ch;
            ch++;
        }

        // Printing characters starting from 'A'
        ch--;
        for(int j = 1; j <= i; j++) {
            ch--;
            cout << ch;
            
        }
        cout << endl;
    }

    return 0;   
}
