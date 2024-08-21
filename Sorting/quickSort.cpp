#include<bits/stdc++.h>
using namespace std;

void quickSort(vector<int>& v, int start, int end) {
        if (start >= end)
            return;

        int pivot = v[end];  // Pivot value is the last element
        int i = start - 1;

        // Partitioning the array
        for (int j = start; j < end; j++) {
            if (v[j] <= pivot) {
                i++;
                swap(v[i], v[j]);
            }
        }

        // Placing the pivot in its correct position
        i++;
        swap(v[i], v[end]);

        // Recursively applying quicksort to the partitions
        quickSort(v, start, i - 1);
        quickSort(v, i + 1, end);
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

    quickSort(v, 0, arrayLength-1);
    
    cout << endl;
    return 0;
}
