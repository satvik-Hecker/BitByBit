class Solution{
    private:
    int helper(int idx, int k, vector<int> &nums){
        if(k==0) return 1;
        if(k<0 || idx>=nums.size()) return 0;
        int path1= helper(idx+1, k-nums[idx],nums);
        int path2 = helper(idx+1,k,nums);
        return path1+path2;
    }
    public:    	
    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
    	//your code goes here
        return helper(0,k,nums);
    }
};