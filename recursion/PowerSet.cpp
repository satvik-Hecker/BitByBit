class Solution {
    private:
    void helper(int index, vector<int> arr, int n, vector<int> &nums,vector<vector<int>> &ans){
        if(index==n){
            ans.push_back(arr);
            return;
        }
        arr.push_back(nums[index]);
        helper(index+1,arr,n,nums,ans);
        arr.pop_back();
        helper(index+1,arr,n,nums,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;
        vector<vector<int>> ans;
        helper(0,arr,n,nums,ans);
        return ans;
    }
};