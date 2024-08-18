#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 0; i < 2*n - 1; i++) {
        for(int j = 0; j < 2*n - 1; j++) {
            int top = i;
            int bottom = j;
            int left = (2*n - 2) - i;
            int right = (2*n - 2) - j;
            
            // Find the minimum distance to any edge
            int num = min(min(top, bottom), min(left, right));
            
            // Print the required number
            cout << n - num << " ";
        }
        cout << endl;  // Move to the next line after each row
    }
    return 0;
}