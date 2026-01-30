class Solution {
    private:
    void helper(int idx,int sum,vector<int> &arr,vector<int> nums, vector<vector<int>> &ans){
        if(sum==0){
            ans.push_back(arr);
            return;
        }
        if(sum<0 || idx==nums.size()) return;
        arr.push_back(nums[idx]);
        helper(idx,sum-nums[idx],arr,nums,ans);
        arr.pop_back();
        helper(idx+1,sum,arr,nums,ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> arr;
        vector<vector<int>> ans;
        helper(0,target,arr,candidates,ans);
        return ans;
    }
};