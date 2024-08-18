#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        //print stars
        for(int j=0; j<=i; j++){
            cout<<"*";
        }

        //print spaces
        for(int j=1; j<=(2*n-2)-2*i; j++){
            cout<<" ";
        }

        //print stars
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0; i<n-1; i++){
        //print stars
        for(int j=n-i-2; j>=0; j--){
            cout<<"*";
        }

        //print spaces
        for(int j=0; j<=2*i+1; j++){
            cout<<" ";
        }
         
        //print stars
        for(int j=n-i-2; j>=0; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}