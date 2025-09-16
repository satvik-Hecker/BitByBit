class Solution{
  public:
    int maxScore(vector<int>& cardScore , int k){
        //your code goes here
        int lsum=0;
        int rsum=0;
        int maxsum=0;
        for(int i=0;i<k;i++) {
            lsum=lsum+cardScore[i];
        }
        maxsum=lsum;
        int n=cardScore.size();
        int rIn=n-1;
        for(int i=k-1;i>=0;i--){
            lsum-=cardScore[i];
            rsum+=cardScore[rIn];
            rIn--;
            maxsum=max(maxsum, lsum+rsum);
        }
        return maxsum;
    }
};