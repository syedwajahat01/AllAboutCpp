#include<bits/stdc++.h>
using namespace std;

int main(){
    // Taking array length
    int arrayLength;
    cin >> arrayLength;

    vector<int> v(arrayLength);
    // Taking input in array
    for(int i = 0; i < arrayLength; i++){
        cin >> v[i];
    }

    int i = 0, j = arrayLength - 1;
    // Reverse the array
    while(i < j){
        swap(v[i], v[j]);
        i++; 
        j--;
    }

    // Print array
    for(int k = 0; k < arrayLength; k++){
        cout << v[k] << " ";
    }
    cout << endl;

    return 0;
}
