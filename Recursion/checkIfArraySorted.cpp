#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int> &arr, int i){
    if(i>=arr.size()-1){
        return true;
    }

    if(arr[i]>arr[i+1]){
        return false;
    }

    return solve(arr, i+1);
}

int main(){
    //taking array length
    int arrayLength;
    cin>>arrayLength;

    vector<int> v(arrayLength);
    //taking input in array
    for(int i=0; i<arrayLength; i++){
        cin>>v[i];
    }

    bool ans = solve(v, 0);
    cout<<ans;
    //printing the array
    // for(int i=0; i<arrayLength; i++){
    //     cout<<v[i]<<" ";
    // }
    cout<<endl;
    return 0;
}