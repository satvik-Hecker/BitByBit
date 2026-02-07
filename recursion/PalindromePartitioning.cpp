class Solution {
private:
bool check(string s, int l, int r){
    while(l<r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
void helper(int idx, string s, vector<string> &arr, vector<vector<string>>&ans){
    if(idx==s.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=idx;i<s.size();i++){
        if(check(s,idx,i)){
            string sub=s.substr(idx,i-idx+1);
            arr.push_back(sub);
            helper(i+1,s,arr,ans);
            arr.pop_back();
        }
    }
}
public:
    vector<vector<string> > partition(string s) {
        //your code goes here
        vector<vector<string>> ans;
        vector<string> arr;
        helper(0,s,arr,ans);
        return ans;
    }
};