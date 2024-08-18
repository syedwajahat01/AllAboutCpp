#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	//upper pyramid
	for(int i=1; i<=n; i++){
		//print spaces
		for(int j=1; j<n-i+1; j++){
			cout<<" ";
		}
		//print stars
		for(int j=1 ; j<=2*i-1; j++){
			cout<<"*";
		}
		cout<<endl;
	}


	//INVERTED PYRAMID	
	for(int i=0; i<n; i++){
		//print spaces
		for(int j=0; j<i; j++){
			cout<<" ";
		}
		//print stars
		for(int j=0; j<2*n - (2*i+1); j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}