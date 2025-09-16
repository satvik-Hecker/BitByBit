class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        //your code goes here
        int l,r,z,maxLen;
        l=r=z=maxLen=0;
        while(r<nums.size()){
            if(nums[r]==0) z++;
            if(z>k){
                if(nums[l]==0) z--;
                l++;
            }
            if(z<=k){
                int len=r-l+1;
                maxLen=max(maxLen,len);
            }
            r++;
        }
        return maxLen;
    }
};