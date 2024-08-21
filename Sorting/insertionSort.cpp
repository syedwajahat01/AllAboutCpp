#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr, int size) {
    for(int i = 0; i < size; i++) {
        int j=i;
        while(j>0 && arr[j-1] > arr[j]) {
            swap(arr[j], arr[j - 1]);
            j--;
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

    insertionSort(v, arrayLength);
    
    cout << endl;
    return 0;
}
