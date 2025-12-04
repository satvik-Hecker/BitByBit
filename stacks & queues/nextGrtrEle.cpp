class Solution {
public:
    vector<int> nextLargerElement(vector<int> arr) {
       int n=arr.size();
       vector<int> ans(n);
       stack<int> st;
       for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        while(!st.empty() && curr>=st.top()){
            st.pop();
        }
        if(st.empty()){
            ans[i]=-1;
        }else{
            ans[i]=st.top();
        }
        st.push(curr);
       }
       return ans;
    }
};
