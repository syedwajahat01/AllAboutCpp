#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int number = 1;  // Line 4: Suggest adding comments to explain the purpose of 'number'
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << number << " ";
                number++;
            }
            cout << endl;
        }
    return 0;
}