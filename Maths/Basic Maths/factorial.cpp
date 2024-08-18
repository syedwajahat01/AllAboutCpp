#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n==0){
        cout<<1;
    }

    int ans=1;
    while(n>0){
        ans *= n;
        n--;
    }
    cout<<ans;
    return 0;
}