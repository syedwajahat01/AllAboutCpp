#include<bits/stdc++.h>
using namespace std;

bool checkOddDigit(int n){
    if(n%2 != 0){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int oddDigit = 0;
    while (n > 0)
    {   
        int remainder = n%10;

        if(checkOddDigit(remainder)){
            oddDigit++;
        }
        // divide by 10
        n /= 10;
    }
    cout<<oddDigit;
    return 0;
}