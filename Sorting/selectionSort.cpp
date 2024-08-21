#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> arr, int size){
    for(int i=0; i<size-1; i++){
        int minIndex = i;
        for(int j=i; j<=size-1; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        if(i != minIndex){
            swap(arr[i], arr[minIndex]);
        }
    }

    //printing the array
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
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

    selectionSort(v, arrayLength);
    
    cout<<endl;
    return 0;
}