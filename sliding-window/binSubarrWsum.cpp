class Solution {
public:
int Helper(vector<int> nums, int goal){
    if(goal<0) return 0;
        int l,r,cnt,sum;
        l=r=cnt=sum=0;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>goal){
                sum-=nums[l];
                l++;
            }
                cnt+=r-l+1;
                r++;
        }
        return cnt;

}
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        //your code goes here
        return Helper(nums,goal)- Helper(nums,goal-1);
    }
};