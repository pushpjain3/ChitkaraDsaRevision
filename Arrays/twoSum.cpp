#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(int n, vector<int> &arr, int target) {
    unordered_map<int,int> mp;
    for(int i =0; i<arr.size(); i++){
        int rest = target - arr[i];
        if(mp.count(rest)){
            return {mp[rest], i};
        }
        mp[arr[i]]=i;
    }
    return {-1,-1};
}

int main()
{
    /*
        Problem Statement: Given an array of integers arr[] 
        and an integer target.
    */
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 2: [" << ans[0] << ", "
         << ans[1] << "]" << endl;
    return 0;
}
