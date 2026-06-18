class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> ans(n, 0);
        stack<int> st;
        
        for(int i = 0; i < n; i++) {
            while(!st.empty() && temp[i] > temp[st.top()]) {
                int prevDay = st.top();
                st.pop();
                ans[prevDay] = i - prevDay;
            }
            st.push(i);
        }
        
        return ans;
    }
};
