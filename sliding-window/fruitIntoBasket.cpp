class Solution{
  public:
    int totalFruits(vector<int>& fruits){
        //your code goes here
        int l,r,maxL;
        l=r=maxL=0;
        unordered_map<int,int> mpp;
        while(r<fruits.size()){
            mpp[fruits[r]]++;
            if(mpp.size()>2){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0) mpp.erase(fruits[l]);
            l++;
            }
            if(mpp.size()<=2){
                maxL=max(maxL,r-l+1);
            }
            r++;
        }
        return maxL;
    }
};
//LC 904