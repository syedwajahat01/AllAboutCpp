#include<bits/stdc++.h>
using namespace std;

int main(){
    //taking array length
    int arrayLength;
    cin>>arrayLength;
    int count = 0;

    vector<int> v(arrayLength);
    //taking input in array
    for(int i=0; i<arrayLength; i++){
        cin>>v[i];
    }

    //count odd in the array
    for(int i=0; i<arrayLength; i++){
        if(v[i] % 2 != 0){
            count++;
        }
    }
    cout<<count;
    cout<<endl;
    return 0;
}