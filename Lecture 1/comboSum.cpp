#include <iostream>
#include <vector>
using namespace std;

void comboSum(int i, int target, vector<int> &candidates, vector<int> &ans){
    if(target == 0){
        for(int i = 0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
        return;
    }   
    if(target<0 || i==candidates.size())return;
                                                                
    ans.push_back(candidates[i]);
    comboSum(i+1, target - candidates[i], candidates, ans);
    ans.pop_back();
    
    comboSum(i+1, target, candidates, ans); 
}
int main() {
    vector<int> candidates = {2, 3, 6, 7};
    vector<int> ans;
    int target = 8;
    comboSum(0, target, candidates, ans);
    return 0;
}
