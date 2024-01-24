#include <bits/stdc++.h>

using namespace std;

int missingNumber(vector<int>&a, int n) {
    int res = 0;
    for(int i = 0; i<n; i++){
        res = res^a[i];
        res = res^(i+1);
    }
    return res;
}

int main()
{
    /*
    Problem Statement: Given an integer N and 
    an array of size N-1 containing N-1 numbers 
    between 1 to N. Find the number(between 1 to N), 
    that is not present in the given array.
    */
    vector<int> a = {0, 1, 2, 4};
    int ans = missingNumber(a, 4);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
