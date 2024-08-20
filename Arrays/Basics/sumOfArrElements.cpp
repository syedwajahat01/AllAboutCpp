#include<bits/stdc++.h>
using namespace std;

int main(){
    //taking array length
    int arrayLength;
    cin>>arrayLength;
    int sum=0;

    vector<int> v(arrayLength);
    //taking input in array
    for(int i=0; i<arrayLength; i++){
        cin>>v[i];
    }

    //printing the array
    for(int i=0; i<arrayLength; i++){
        sum += v[i];
    }

    cout<<sum;
    cout<<endl;
    return 0;
}