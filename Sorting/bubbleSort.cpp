#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Printing the array
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    // Taking array length
    int arrayLength;
    cin >> arrayLength;

    vector<int> v(arrayLength);
    // Taking input in array
    for(int i = 0; i < arrayLength; i++) {
        cin >> v[i];
    }

    bubbleSort(v, arrayLength);
    
    cout << endl;
    return 0;
}
