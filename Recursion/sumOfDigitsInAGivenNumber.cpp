#include<bits/stdc++.h>
using namespace std;

int solve(int n){

    //base case
    if(n<10){
        return n;
    }

        // Recursive case: sum the digits
		int sum = n % 10 + solve(n / 10);

		// If the sum is still more than one digit, recurse again
		return solve(sum);
}

int main(){
    int n;
    cin>>n;

    int ans = solve(n);
    cout<<ans;
    return 0;
}