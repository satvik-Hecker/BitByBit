class Solution {
    private:
void helper(int idx, vector<int> &arr,vector<vector<int>>&ans,vector<int> &nums){
    if(idx==nums.size()){
        ans.push_back(arr);
        return;
    }
    arr.push_back(nums[idx]);
    helper(idx+1,arr,ans,nums);
    arr.pop_back();
    for(int j=idx+1;j<nums.size();j++){
        if(nums[j]!=nums[idx]){
            helper(j,arr,ans,nums);
            return;
        }
    }
    helper(nums.size(),arr,ans,nums);
}
public:

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> arr;
        helper(0,arr,ans,nums);
        return ans;
    }
};