#include<bits/stdc++.h>
using namespace std;

int main(){
    //A perfect number is a number whose proper divisors add up to the number itself.
    int n;
    cin>>n;

    bool ans = false;
    int sum=0;
    for(int i=1; i<n; i++){
        if(n%i == 0 && sum<n){
            sum += i;
            if(sum == n){
                cout<< true;
                break;
            }            
        }
    }
    cout<<false;
    
    return 0;
}