#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    //upper pattern
    for(int i=0; i<n; i++){
        //print stars
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }

        //print spaces
        for(int j=1; j<=2*i; j++){
            cout<<" ";
        }

        //print stars
        for(int j=n-i; j>=1; j--){
            cout<<"*";
        }

        cout<<endl;
    }

    //lower pattern
    for(int i=0; i<n; i++){
        //print stars
        for(int j=0; j<=i; j++){
            cout<<"*";
        }

        //print spaces
        for(int j=2; j<(n-i)*2; j++){
            cout<<" ";
        }

        //print stars
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}