#include<bits/stdc++.h>
using namespace std;

int main(){
    //taking array length
    int arrayLength;
    cin>>arrayLength;

    vector<int> v(arrayLength);
    //taking input in array
    for(int i=0; i<arrayLength; i++){
        cin>>v[i];
    }
    int flag=0;
    //printing the array
    for(int i=1; i<arrayLength; i++){
        if(v[i-1] > v[i]){
            flag=1;
            break;
        }
    }

    if(flag == 0){
        cout<<"true";
    }
    else{
        cout<<"False";
    }
    cout<<endl;
    return 0;
}