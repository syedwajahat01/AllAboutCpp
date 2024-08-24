#include <iostream>
#include <vector>
using namespace std;

vector<int> solve(vector<int>& arr, int i) {
    // Base case: If index i is out of bounds, return an empty vector
    if (i < 0) {
        return vector<int>();
    }

    // Recursive call: Get the reversed part of the remaining array
    vector<int> result = solve(arr, i - 1);

   // Add the current element to the front of the result
    result.insert(result.begin(), arr[i]);


    return result;
}

int main() {
    // Taking array length
    int arrayLength;
    cin >> arrayLength;

    vector<int> v(arrayLength);
    // Taking input in array
    for (int i = 0; i < arrayLength; i++) {
        cin >> v[i];
    }

    // Reversing the array
    vector<int> reversedArray = solve(v, v.size() - 1);

    // Printing the reversed array
    for (int i = 0; i < reversedArray.size(); i++) {
        cout << reversedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
