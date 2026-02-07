class Solution {
private:
void helper(int idx,string s,vector<string> mpp,vector<string> &ans,string digits){
    if(idx==digits.size()){
        ans.push_back(s);
        return;
    }
    int number=digits[idx]-'0';
    for(int i=0;i<mpp[number].size();i++){
        helper(idx+1,s+mpp[number][i],mpp,ans,digits);
    }
}
public:
    vector<string> letterCombinations(string digits) {
        vector<string> mpp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        helper(0,"",mpp,ans,digits);
        return ans;
    }
};