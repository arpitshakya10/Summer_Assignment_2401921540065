class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxi = 0;
        int n = heights.size();

        for(int i = 0; i <= n; i++) {
            while(!st.empty() && (i == n || heights[i] < heights[st.top()])) {
                int height = heights[st.top()];
                st.pop();

                int right = i;
                int left;

                if(st.empty()) left = -1;
                else left = st.top();

                int width = right - left - 1;
                maxi = max(maxi, height * width);
            }

            st.push(i);
        }

        return maxi;
    }
};
