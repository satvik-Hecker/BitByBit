class Solution{
  public:
    int longestNonRepeatingSubstring(string& s){
        //your code goes here
        vector<int> hash(256,-1);
        int l,r,maxLen;
         l=r=maxLen=0;
        while(r<s.size()){
            if(hash[s[r]]!=-1){
                l=max(hash[s[r]]+1, l);
            }
            int len=r-l+1;
            maxLen=max(maxLen,len);
            hash[s[r]]=r;
            r++;
        }
        return maxLen;

    }
};