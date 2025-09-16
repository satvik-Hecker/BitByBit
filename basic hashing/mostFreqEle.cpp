class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        int maxEle=nums[0];
        for(int i=0;i<nums.size();i++){
            maxEle=max(nums[i],maxEle);
        }
        vector<int> hash(maxEle+1, 0);
        int maxFreq=0, ele=-1;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i=0;i<hash.size();i++){
            
            if(hash[i]>maxFreq){
                 maxFreq=hash[i];
                 ele = i;
            }
            
            
        }
        return ele;
    }
};