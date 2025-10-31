class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low = 0;
        int high= n-1;
        while (low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target) return mid;
            if(nums[low]<=nums[mid]){ // left sorted 
                if(nums[low]<=target && target<=nums[mid]){ // target is in left sorted half
                    high=mid-1;
                }else{ // not in left sorted half
                    low = mid+1;
                }
            }else {//right sorted
                if(nums[mid]<=target && target<=nums[high]){
                    low=mid+1; //targt is in right sorted half
                }else {
                    high=mid-1;
                }
            }

        }
            return -1;
    }
};