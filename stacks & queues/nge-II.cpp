class Solution {
public:
    vector<int> nextGreaterElements(vector<int> &arr) {
        int n=arr.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=2*n-1;i>=0;i--){
            int curr=arr[(i%n)];
            while(!st.empty() && curr>=st.top()){
                st.pop();
            }
            if(i<n){
                if(st.empty()){
                    ans[i]=-1;
                }else{
                    ans[i]=st.top();
                }
            }
            st.push(curr);
        }
        return ans;
    }
};