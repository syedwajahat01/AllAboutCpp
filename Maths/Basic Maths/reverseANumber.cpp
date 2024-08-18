#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int reverseNumber = 0;
    while (n > 0)
    {   
        int remainder = n%10;
        reverseNumber = reverseNumber*10 + remainder;
        // divide by 10
        n /= 10;
    }

    cout<<reverseNumber;
    return 0;
}