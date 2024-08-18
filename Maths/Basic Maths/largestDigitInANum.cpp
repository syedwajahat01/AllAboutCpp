#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    //store the largest digit
    int largestDigit = 0;
    while (n!=0)
    {
       int remainder = n%10;

       largestDigit = max(largestDigit, remainder);
       n /= 10;
    }
    cout<<largestDigit;
    
    return 0;
}