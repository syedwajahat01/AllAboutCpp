#include<bits/stdc++.h>
using namespace std;

int main() {
    // Taking array length
    int arrayLength;
    cin >> arrayLength;

    vector<int> v(arrayLength);
    // Taking input in array
    for(int i = 0; i < arrayLength; i++) {
        cin >> v[i];
    }

    // Using a map to count occurrences of each element
    map<int, int> countMap;

    for(auto i : v) {
        countMap[i]++;
    }

    // Find the element with the maximum occurrence
    int maxOccurrence = 0;
    int maxOccurrenceElement = INT_MAX; // Initialize with a large value

    for(auto &entry : countMap) {
        if(entry.second > maxOccurrence) {
            maxOccurrence = entry.second;
            maxOccurrenceElement = entry.first;
        } else if(entry.second == maxOccurrence && entry.first < maxOccurrenceElement) {
            maxOccurrenceElement = entry.first; // Choose the smaller element in case of a tie
        }
    }

    cout << maxOccurrenceElement << endl;

    return 0;
}
