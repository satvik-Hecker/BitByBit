class Solution {
public:
    int helper(vector<int> arr, int k){
        if(k==0) return 0;
        int l,r,cnt;
        l=r=cnt=0;
        unordered_map<int,int> mpp;
        while(r<arr.size()){
            mpp[arr[r]]++;
            while(mpp.size()>k){
                mpp[arr[l]]--;
                if(mpp[arr[l]]==0) mpp.erase(arr[l]);
                l++;
            }
            cnt+=r-l+1;
            r++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums,k)-helper(nums,k-1);
    }
};
//lc 992