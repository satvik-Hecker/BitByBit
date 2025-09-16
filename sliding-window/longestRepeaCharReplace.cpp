class Solution {
public:
    int characterReplacement(string s, int k) {
        //your code goes here
        int l,r,maxL;
        int maxFreq=0;
        l=r=maxL=0;
        unordered_map<int,int> mpp;
        while(r<s.size()){
            mpp[s[r]-'A']++;
            maxFreq=max(maxFreq,mpp[s[r]-'A']);
            int len=r-l+1;
            if(len-maxFreq > k){
                mpp[s[l]-'A']--;
                if(mpp[s[l]]==0) mpp.erase(s[l]);
                l++;
            }
            if(len-maxFreq<=k){
                maxL=max(maxL,r-l+1);
            }
            r++;
        }
        return maxL;
    }
};
//LC 424