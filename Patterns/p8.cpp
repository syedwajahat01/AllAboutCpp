#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	for(int i=0; i<=n-1; i++){
		//print spaces
		for(int spaces=0; spaces<i; spaces++){
			cout<<" ";
		}

		//print starts
		for(int j= 0; j<2*n - (2*i+1); j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}