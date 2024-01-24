
#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& arr, int n) {
    int low = 0, mid = 0;
    int high = n -1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[high], arr[mid]);
            high--;
        }
        else mid++;
    }
}

int main()
{
    /*
        Problem Statement: Given an array consisting of only 0s, 1s, and 2s. 
        Write a program to in-place sort the array without using inbuilt sort functions. 
        ( Expected: Single pass-O(N) and constant space)
    */
    int n = 6;
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    sortArray(arr, n);
    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
