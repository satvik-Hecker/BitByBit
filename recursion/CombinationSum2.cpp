class Solution {
private:
void helper(int idx,int sum, vector<int> &arr, vector<int> nums,vector<vector<int>> &ans){
    if(sum==0){
        ans.push_back(arr);
        return;
    }
    if(sum <0 || idx==nums.size()) return ;
    arr.push_back(nums[idx]);
    helper(idx+1,sum-nums[idx],arr,nums,ans);
    arr.pop_back();
   
    for(int j=idx+1;j<nums.size();j++){
        if(nums[j]!=nums[idx]){
            helper(j,sum,arr,nums,ans);
            break;
        }
    }
   
}
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> arr;
        helper(0,target,arr,candidates,ans);
        return ans;
    }
};