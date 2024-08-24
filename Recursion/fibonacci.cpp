#include<bits/stdc++.h>
using namespace std;
 int solve(int n){
        //base cases
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }

        //recursive calls
        return solve(n-1) + solve(n-2);
    }
int main(){
    int n;
    cin>>n;
    int ans = solve(n);
    cout<<ans;
    return 0;
}