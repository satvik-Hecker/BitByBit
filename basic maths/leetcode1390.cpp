class Solution {
public:
    pair<int,int> divFour(int n){
        int sum=1+n;
        int cnt=2;
        pair<int,int> ans;
        for(int i=2;i*i<=n;i++){
            if(n%i ==0){
                cnt++;
                sum+=i;
                if(i!=n/i){
                    cnt++;
                    sum+=n/i;
                } 
            }
        }
        return {cnt,sum};
    }
    int sumFourDivisors(vector<int>& nums) {
        vector<pair<int,int>> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(divFour(nums[i]));
        }
        int sum=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i].first==4) sum+=ans[i].second;
        }
        return sum;
    }
};