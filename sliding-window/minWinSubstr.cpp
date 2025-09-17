class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> hash(256,0);
        int n=s.size();
        int m=t.size();
        int sInd=-1;
        int l,r,cnt;
        l=r=cnt=0;
        int minL=INT_MAX;
        for(char c:t){
            hash[c]++;
        }
        while(r<n){
            if(hash[s[r]] > 0) cnt++;
            hash[s[r]]--;
            while(cnt==m){
                if(r-l+1 < minL){
                     minL=r-l+1;
                     sInd=l;}
                hash[s[l]]++;
                if(hash[s[l]] > 0) cnt--;
                l++;
            }
            r++;
        }
        return (sInd == -1) ? "" : s.substr(sInd,minL);
    }
};
//LC 76