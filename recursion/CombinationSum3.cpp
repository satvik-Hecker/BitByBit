class Solution {
    private:
    void helper(int sum, int last, int k, vector<int> &arr, vector<vector<int>> & ans){
        if(sum==0 && arr.size()==k){
            ans.push_back(arr);
            return;
        }
        if(sum<0 || arr.size()>k) return;
        for(int i=last;i<=9;i++){
            if(i<=sum){
                arr.push_back(i);
                helper(sum-i,i+1,k,arr,ans);
                arr.pop_back();
            }else{
                break;
            }
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> arr;
        vector<vector<int>> ans;
        helper(n,1,k,arr,ans);
        return ans;
    }
};