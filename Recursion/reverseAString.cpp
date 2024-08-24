#include<bits/stdc++.h>
using namespace std;

void solve(vector<char>& arr, int i, int size){
    if(i==0){
        return; 
    }
    cout<<arr[i-1]<<" ";
    solve(arr, i=i-1, size);
    
};

int main(){
    //taking array length
    int arrayLength;
    cin>>arrayLength;

    vector<char> v(arrayLength);
    //taking input in array
    for(char i=0; i<arrayLength; i++){
        cin>>v[i];
    }

    int i=arrayLength;
    solve(v, i, arrayLength);
    //printing the array
    // for(int i=0; i<arrayLength; i++){
    //     cout<<v[i]<<" ";
    // }
    cout<<endl;
    return 0;
}