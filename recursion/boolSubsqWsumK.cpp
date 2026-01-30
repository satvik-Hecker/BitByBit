class Solution{
    private:
    bool helper(vector<int> &nums, int idx, int k){
        if(k==0){
            return true;
        }
        if(idx==nums.size() || k<0){
            return false;
        }
        bool path1= helper(nums,idx+1,k-nums[idx]);
        bool path2= helper(nums,idx+1,k);
        return path1 || path2;
    }
    public:
    bool checkSubsequenceSum(vector<int>& nums, int k) {
         //your code goes here
        return helper(nums,0,k);
         
    }
};