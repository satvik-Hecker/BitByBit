class Solution {
public:
    int helper(vector<int> nums, int k){
        if(k<0) return 0;
        int cnt,sum,l,r;
        l=r=cnt=sum=0;
        while(r<nums.size()){
            sum+=(nums[r]%2);
            while(sum>k){
                sum-=nums[l]%2;
                l++;
            }
            cnt+=r-l+1;
            r++;
        }
        return cnt;
    }
    int numberOfOddSubarrays(vector<int>& nums, int k) {
        //your code goes here
        return helper(nums,k)-helper(nums,k-1);
    }
};